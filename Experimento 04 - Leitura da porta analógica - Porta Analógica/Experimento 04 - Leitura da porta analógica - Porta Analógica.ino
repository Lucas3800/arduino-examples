/* Curso de Bacharelado em Engenharia Elétrica - UNIFAP
 * Autores: 
 *      - Lucas Almeida de Abreu;
 *      - Lucas do Nascimento Raiol;
 *      - Nathália de Castro Nascimento;
 * Data: 21/05/2022
 * Descrição:
 *     Leitura da porta analógica - Porta Analógica
 * Projeto do circuito em:
 *    https://www.tinkercad.com/things/0buaSgsKEEJ
 ------------------------------------------------------- */

// Inclusão de bibliotecas
#include <string.h> // Biblioteca para manipulação de strings

// Variáveis globais
#define PIN_ANALOGICO_UTILIZADO A0 // Constante referente ao pino analógico utilizado para o leitura de saida do potenciômetro
int valorDeLeituraDoPinoAnalogico = 0; // Variável global que armazena o valor de leitura do pino analogico

// Declaração do escopo de funções
float converteBitsParaTensao(int); // Função que converte os bits de saida da leitura da porta analógica para tensão

void setup()
{
  Serial.begin(9600); // Inicializando a porta serial
  pinMode(PIN_ANALOGICO_UTILIZADO, INPUT); // Configurando a porta utilizada no modo entrada
}

void loop()
{
    if(valorDeLeituraDoPinoAnalogico != analogRead(PIN_ANALOGICO_UTILIZADO)) {
      
      valorDeLeituraDoPinoAnalogico = analogRead(PIN_ANALOGICO_UTILIZADO); // Lendo o valor de saída do potenciômetro
      
      Serial.println(
        (String) "Valor de Saida em bits: " 
        + valorDeLeituraDoPinoAnalogico
        + " | Valor de Saida em tensao: "
        + converteBitsParaTensao(valorDeLeituraDoPinoAnalogico)
      ); // Imprimindo o valor lido no monitor serial
    }
}

float converteBitsParaTensao(int valorDaLeituraAnalogicaEmBits) {
  return (valorDaLeituraAnalogicaEmBits * 5.0) / 1023.0; // Retornando o valor de tensão
}