#include <corrente.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>

#include "EmonLib.h"

#define TENSAO 220 //Tensão da rede
#define SENSOR A0  // Pino para a leitura do sensor
#define CALIBRACAO 9.0909090909 // Calibração do sensor


float Irms ;
int RELE = D6;
int EMERGENCY = D7;

int DESLIGADO = 0;

const int capacity = JSON_OBJECT_SIZE(5);
StaticJsonDocument<capacity> doc;


const char* SSID = "Liborio Home";
const char* PASS = "6A3040305F63A633E37233";
const String CORRENTE = "\"CORRENTE\":";

String JSON_CORRENTE(){ // Função que retorna o valor medido pelo sensor MQ-2
 float corrent = Irms;
 
    return "{" +
      CORRENTE + String(corrent) +
      "}";
}

corrente sensor(D1,D2,D3); // objeto sensor incializando o constructor
EnergyMonitor Calcular_Corrente; //objeto para calcular a corrente

void setup() {

  pinMode(RELE, OUTPUT);
  pinMode(EMERGENCY, OUTPUT);
  
  Calcular_Corrente.current(SENSOR, CALIBRACAO); // função da classe EnergyMonitor 
   Serial.begin(115200);
}

void loop() {

   Irms =  Calcular_Corrente.calcIrms(1480);   // Calcula o valor da Corrente 
   
  // Serial.print(JSON_CORRENTE());
   
    serializeJson(doc,Serial);

    if( Serial.available() > 0 ){
      
      deserializeJson(doc,Serial);
     //Serial.print(JSON_CORRENTE());
    }
                      
  

 doc["CORRENTE"] = Irms ;

   if(Irms < 0.05 && DESLIGADO < 5){
    
      //doc["RELE"] = 1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ;
     digitalWrite(RELE, LOW);
     digitalWrite(EMERGENCY, HIGH);
     
     DESLIGADO = 4;
      
    }
    
    else{
      //doc["RELE"] = 0;
      digitalWrite(RELE, HIGH);
       digitalWrite(EMERGENCY, LOW);
      
      DESLIGADO ++;
    }

    sensor.teste(Irms);      // Função testar o valor da corrente
    sensor.show(Irms ,TENSAO);  // Função mostrar valores na tela
    delay(1000); 
}
