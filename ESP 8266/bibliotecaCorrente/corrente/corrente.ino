#include <corrente.h>
#include "EmonLib.h"


corrente sensor(A0,220,D1,D2,D3);
EnergyMonitor CorrenteSCT;

void setup() {

  CorrenteSCT.current(potencia, 9.0909090909);
 
    Serial.begin(9600);
  
}

void loop() {

 float Irms =  CorrenteSCT.calcIrms(1480);   // Calcula o valor da Corrente 
    
sensor.teste(Irms);
sensor.show(Irms ,_tensao);
}
