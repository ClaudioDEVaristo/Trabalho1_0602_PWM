# Controle de Servomotor por PWM com RP2040

Este projeto utiliza o microcontrolador RP2040 e o **Pico SDK** para simular o controle de um servomotor padrão por meio de modulação por largura de pulso (PWM). A simulação será realizada com o auxílio do **simulador de eletrônica online Wokwi** e o experimento contará com a utilização do **LED RGB conectado à GPIO 12**, conforme os requisitos especificados.

## 📋 Requisitos

### 1. Configuração de PWM
- **GPIO 22:** Configurar a frequência de PWM para aproximadamente **50Hz** (período de **20ms**).

### 2. Ajuste de Posição - 180 Graus
- Definir ciclo ativo para **2.400µs** (Duty Cycle de **0,12%**).
- Ajustar o braço do servomotor para **180 graus**.
- Aguardar **5 segundos**.

### 3. Ajuste de Posição - 90 Graus
- Definir ciclo ativo para **1.470µs** (Duty Cycle de **0,0735%**).
- Ajustar o braço do servomotor para **90 graus**.
- Aguardar **5 segundos**.

### 4. Ajuste de Posição - 0 Graus
- Definir ciclo ativo para **500µs** (Duty Cycle de **0,025%**).
- Ajustar o braço do servomotor para **0 graus**.
- Aguardar **5 segundos**.

### 5. Movimento Periódico
- Criar uma rotina para movimentação periódica do braço do servomotor entre os ângulos de **0 e 180 graus**.
- A movimentação deve ser suave, com incremento de **±5µs** e atraso de ajuste de **10ms** entre cada passo.

### 6. Experimento com LED RGB
- Utilizar a **ferramenta educacional BitDogLab** para testar o código com um **LED RGB conectado à GPIO 12**.

## 🛠️ Tecnologias e Ferramentas Utilizadas
- **RP2040 (Raspberry Pi Pico)**
- **Pico SDK**
- **Wokwi (Simulador de Eletrônica)**
- **BitDogLab (Ferramenta Educacional)**

## 📦 Estrutura do Código
- Configuração inicial de GPIO e PWM.
- Ajuste de ciclos ativos para diferentes posições do servomotor.
- Loop principal para movimento suave entre 0 e 180 graus.
- Rotina de teste com LED RGB.

## 🚀 Como Executar
1. Clone este repositório.
2. Configure o ambiente Pico SDK conforme a documentação oficial.
3. Compile e simule o código usando o Wokwi.
4. Realize os testes utilizando o LED RGB (Pino 12) no BitDogLab.

## 🚀 Link do vídeo no YouTube
