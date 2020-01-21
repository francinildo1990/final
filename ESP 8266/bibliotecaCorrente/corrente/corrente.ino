#include <corrente.h>
#include <WiFiServer.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>

#include "EmonLib.h"

#define TENSAO 220 //Tensão da rede
#define SENSOR A0  // Pino para a leitura do sensor
#define CALIBRACAO 9.0909090909 // Calibração do sensor


float Irms ;
int PINO = D6;
int DESLIGADO = 0;

const int capacity = JSON_OBJECT_SIZE(5);
StaticJsonDocument<capacity> doc;


const char* SSID = "Liborio Home";
const char* PASS = "6A3040305F63A633E37233";


corrente sensor(D1,D2,D3); // objeto sensor incializando o constructor
EnergyMonitor Calcular_Corrente; //objeto para calcular a corrente

void setup() {

  pinMode(PINO, OUTPUT);
  Calcular_Corrente.current(SENSOR, CALIBRACAO); // função da classe EnergyMonitor 
   Serial.begin(9600);
}

void loop() {

   Irms =  Calcular_Corrente.calcIrms(1480);   // Calcula o valor da Corrente 
   

    serializeJson(doc,Serial);

    if( Serial.available() > 0 ){
      
   deserializeJson(doc,Serial);
   
   
    }
 delay(1000);                      
  

 doc["CORRENTE"] = Irms ;

   if(Irms < 0.05 && DESLIGADO < 5){
    
      doc["RELE"] = 1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ;
     digitalWrite(PINO, LOW);
     DESLIGADO = 4;
      
    }
    
    else{
      doc["RELE"] = 0;
      digitalWrite(PINO, HIGH);
      DESLIGADO ++;
    }

    sensor.teste(Irms);      // Função testar o valor da corrente
    sensor.show(Irms ,TENSAO);  // Função mostrar valores na tela
}
