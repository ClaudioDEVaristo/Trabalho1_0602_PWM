// Inclusão de Bibliotecas
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"

const uint SERVO_PWM = 22; // Caso seja utilizado na placa BitDogLab alterar para o pino 12 do RGB
const uint16_t period = 20000; //  20ms = 20000 ticks
const float DIVIDER_PWM = 125.0; //Divisor de clock
uint16_t pwm_level = 500;

void setup_pwm(){

    uint slice;
    gpio_set_function(SERVO_PWM, GPIO_FUNC_PWM); // Configura o pino do LED para função PWM
    slice = pwm_gpio_to_slice_num(SERVO_PWM);    // Obtém o slice do PWM associado ao pino do LED
    pwm_set_clkdiv(slice, DIVIDER_PWM);    // Define o divisor de clock do PWM
    pwm_set_wrap(slice, period);           // Configura o valor máximo do contador (período do PWM)
    pwm_set_enabled(slice, true);          // Habilita o PWM no slice correspondente

    pwm_set_gpio_level(SERVO_PWM, 2400);  //Move o braço do servo para 180 graus
    sleep_ms(5000);

    pwm_set_gpio_level(SERVO_PWM, 1470);  //Move o braço do servo para 90 graus
    sleep_ms(5000);

    pwm_set_gpio_level(SERVO_PWM, 500);  //Move o braço do servo para 0 graus
    sleep_ms(5000);

}

void main(){
    stdio_init_all();
    setup_pwm();
    while(1){
        for(pwm_level; pwm_level <= 2400; pwm_level += 5){ //Move o braço do servo 180 até 0
            pwm_set_gpio_level(SERVO_PWM, pwm_level);
            sleep_ms(10); 
        }
        for(pwm_level; pwm_level >= 500; pwm_level -= 5){ //Move o braço do servo 0 até 180
            pwm_set_gpio_level(SERVO_PWM, pwm_level);
            sleep_ms(10); 
        }
    }
}