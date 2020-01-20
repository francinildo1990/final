#include"Arduino.h"
#include"corrente.h"


corrente::corrente(int LED_GREEN, int LED_RED, int LED )
  {

  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED, OUTPUT);


_LED_GREEN = LED_GREEN;
_LED_RED = LED_RED;
_LED = LED;
  }


void corrente::teste(float a){

  if ( a < 0.1 ){

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


    if ( a < 0.05 ){
      a = 0;
      potencia = 0;
      }
      else
      {
         potencia = a * b;  // Calcula o valor da Potencia Instantanea
        }

    //Serial.print("Corrente = ");
    //Serial.print(a);
    //Serial.println(" A");

    Serial.print("Potencia = ");
    Serial.print(potencia);
    Serial.println(" W");

    delay(500);
    Serial.print(".");
    digitalWrite(_LED, HIGH);
    delay(500);
    Serial.print(".");
    digitalWrite(_LED, LOW);
    delay(500);
}
