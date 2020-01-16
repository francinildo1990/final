#include <corrente.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
#include "EmonLib.h"

#define TENSAO 220 //Tensão da rede
#define SENSOR A0  // Pino para a leitura do sensor
#define CALIBRACAO 9.0909090909 // Calibração do sensor

corrente sensor(D1,D2,D3); // objeto sensor incializando o constructor
EnergyMonitor Calcular_Corrente; //objeto para calcular a corrente

void setup() {

  Calcular_Corrente.current(SENSOR, CALIBRACAO); // função da classe EnergyMonitor 
 
    Serial.begin(9600);
  
}

void loop() {

 float Irms =  Calcular_Corrente.calcIrms(1480);   // Calcula o valor da Corrente 
    
sensor.teste(Irms);         // Função testar o valor da corrente
sensor.show(Irms ,TENSAO);  // Função mostrar valores na tela
}
