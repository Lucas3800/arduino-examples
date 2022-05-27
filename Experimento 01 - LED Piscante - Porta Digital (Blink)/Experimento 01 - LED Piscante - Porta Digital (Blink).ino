/* Curso de Bacharelado em Engenharia Elétrica - UNIFAP
 * Autores: 
 *      - Lucas Almeida de Abreu;
 *      - Lucas do Nascimento Raiol;
 *      - Nathália de Castro Nascimento;
 * Data: 21/05/2022
 * Descrição:
 *     LED Piscante - Porta Digital (Blink)
 * Projeto do circuito em:
 *    https://www.tinkercad.com/things/kyVJ7G0i7MZ
 ------------------------------------------------------- */

// Definindo constantes
#define LED_PIN 0             // Define a constante do pino do LED
// Definindo a estrutura de funções
void blink(void);             // Função para alternar o estado de saida do LED 

void setup() {
    pinMode(LED_PIN, OUTPUT); // Configura o pino do LED como saída
}

void loop() {
    blink();
}

void blink() {
    digitalWrite(LED_PIN, !digitalRead(LED_PIN)); // Alterna o estado do LED
    delay(1000);                                  // Aguarda 1 segundo
}
