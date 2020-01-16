#ifndef CORRENTE_H
 #define CORRENTE_H

 #include"Arduino.h"


 class corrente
     {

      public:


          corrente(int LED_GREEN, int LED_RED, int LED );

          void teste(float a);
          void show(float a , float b);




           int _LED_GREEN;
           int _LED_RED;
           int _LED;


     };


   #endif
