/* Curso de Bacharelado em Engenharia Elétrica - UNIFAP
 * Autores: 
 *      - Lucas Almeida de Abreu;
 *      - Lucas do Nascimento Raiol;
 *      - Nathália de Castro Nascimento;
 * Data: 21/05/2022
 * Descrição:
 *     LED Pulsante - Porta Digital
 * Projeto do circuito em:
 *    https://www.tinkercad.com/things/79AAuAWOT19
 ------------------------------------------------------- */

// Definindo constantes
#define LED_PIN 3 // Constante LED_PIN referente a porta utilizada para o LED

// Inicializando variáveis globais
int ledVal = 0;
float valorDeSaida = 0.0;

// Calculo de pulso do LED
void pulsaLed() {
  for(int i = 0; i < 180; i++) {
    ledVal = int(sin(i * (PI / 180)) * 255);
    analogWrite(LED_PIN, ledVal);
    delay(25);
  }
}

void setup() {
  pinMode(LED_PIN, OUTPUT); // Configurando a porta LED_PIN como saída
}

void loop() {
  pulsaLed();
}
