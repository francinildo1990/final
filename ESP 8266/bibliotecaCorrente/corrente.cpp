#include"Arduino.h"
#include"corrente.h"


corrente::corrente(int LED_GREEN, int LED_RED, int LED ) // inicializando o constructor
  {

  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED, OUTPUT);


_LED_GREEN = LED_GREEN;
_LED_RED = LED_RED;
_LED = LED;
  }


void corrente::teste(float a){  // função recebe o valor da corrente e verifica

  if ( a < 0.06 ){

      digitalWrite(_LED_GREEN, HIGH);
      digitalWrite(_LED_RED, LOW);

      }
      else
      {
        digitalWrite(_LED_GREEN, LOW);
        digitalWrite(_LED_RED, HIGH);
        }


  }

void corrente::show(float a , float b)
{
    float potencia;

         potencia = a * b;  // Calcula o valor da Potencia Instantanea
        

    //Serial.print("Corrente = ");
    //Serial.print(a);
    //Serial.println(" A");

    //Serial.print("Potencia = ");
    //Serial.print(potencia);
    //Serial.println(" W");

    delay(500);
    //Serial.print(".");
    digitalWrite(_LED, HIGH); // led blink
    delay(500);
    //Serial.print(".");
    digitalWrite(_LED, LOW);
    delay(500);
}
