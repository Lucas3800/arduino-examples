/* Curso de Bacharelado em Engenharia Elétrica - UNIFAP
 * Autores: 
 *      - Lucas Almeida de Abreu;
 *      - Lucas do Nascimento Raiol;
 *      - Nathália de Castro Nascimento;
 * Data: 21/05/2022
 * Descrição:
 *     Semáforo de LED - Porta Digital
 * 
 * Projeto do circuito em: 
 *     https://www.tinkercad.com/things/3ahOJk9cFES
 ----------------------------------------------------------------------------- */

// Definindo as constantes referentes aos pinos utilizados
#define LED_VERMELHO_PIN 2
#define LED_AMARELO_PIN 1
#define LED_VERDE_PIN 0

// Definindo função para alternar o valor do estado do pino
void alternaValorDoPino(int pino, int tempoEmMsParaAlternar = 0, bool valorInicial = HIGH) {
    digitalWrite(pino, valorInicial);
    delay(tempoEmMsParaAlternar);
    digitalWrite(pino, !digitalRead(pino));
}

// Definindo função para a regra de funcionamento do semáforo
void iniciarSemaforo(int tempoEmMsLedVermelhoAtivo = 5000, int tempoEmMsLedAmareloAtivo = 2000, int tempoEmMsLedVerdeAtivo = 5000) {
    alternaValorDoPino(LED_VERMELHO_PIN, tempoEmMsLedVermelhoAtivo);
    alternaValorDoPino(LED_VERDE_PIN, tempoEmMsLedVerdeAtivo);
    alternaValorDoPino(LED_AMARELO_PIN, tempoEmMsLedAmareloAtivo);

}

void setup() {
    // Definindo os pinos de saida para cada LED
    pinMode(LED_VERMELHO_PIN, OUTPUT);
    pinMode(LED_AMARELO_PIN, OUTPUT);
    pinMode(LED_VERDE_PIN, OUTPUT);
}

void loop() {
    iniciarSemaforo();
}
