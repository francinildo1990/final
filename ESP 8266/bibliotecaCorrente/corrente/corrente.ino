#include <corrente.h>
#include <WiFiServer.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>

#include "EmonLib.h"

#define TENSAO 220 //Tensão da rede
#define SENSOR A0  // Pino para a leitura do sensor
#define CALIBRACAO 9.0909090909 // Calibração do sensor

int PINO = D6;

const int capacity = JSON_OBJECT_SIZE(3);
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

float Irms =  Calcular_Corrente.calcIrms(1480);   // Calcula o valor da Corrente 

   doc["CORRENTE"] = Irms;

   if(Irms > 0.1){
    
     doc["LED"] = 0 ;
    }
    
    else{
      
      doc["LED"] = 1 ;
      
    }

    serializeJson(doc,Serial);

    if( Serial.available() > 0 ){
      
   deserializeJson(doc,Serial);
   
   if( doc["LED"] ==1){
    
     digitalWrite(PINO, HIGH);
     
   }else if ( doc["LED"] == 0){
    
     digitalWrite(PINO, LOW);
   }
 }
 delay(1000);                      
  
sensor.teste(Irms);         // Função testar o valor da corrente
sensor.show(Irms ,TENSAO);  // Função mostrar valores na tela
}
