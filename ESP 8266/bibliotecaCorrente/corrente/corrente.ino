#include <corrente.h>
#include <WiFiServer.h>
#include <ESP8266WiFi.h>
#include "EmonLib.h"

#define TENSAO 220 //Tensão da rede
#define SENSOR A0  // Pino para a leitura do sensor
#define CALIBRACAO 9.0909090909 // Calibração do sensor

const char* ssid = "Liborio Home"; //VARIÁVEL QUE ARMAZENA O NOME DA REDE SEM FIO EM QUE VAI CONECTAR
const char* password = "6A3040305F63A633E37233";

IPAddress ip(192,168,1,5); //COLOQUE UMA FAIXA DE IP DISPONÍVEL DO SEU ROTEADOR. EX: 192.168.1.110 **** ISSO VARIA, NO MEU CASO É: 192.168.0.175
IPAddress gateway(192,168,1,1); //GATEWAY DE CONEXÃO (ALTERE PARA O GATEWAY DO SEU ROTEADOR)
IPAddress subnet(255,255,255,0); //MASCARA DE REDE

WiFiServer servidor(80);//Cria um objeto "servidor" na porta 80 (http).
WiFiClient cliente;//Cria um objeto "cliente".

String html;//String que armazena o corpo do site.

corrente sensor(D1,D2,D3); // objeto sensor incializando o constructor
EnergyMonitor Calcular_Corrente; //objeto para calcular a corrente

void setup() {

   WiFi.mode(WIFI_STA);//Habilita o modo STATION.
   WiFi.begin("Liborio Home", "6A3040305F63A633E37233");//Conecta no WiFi (COLOQUE O NOME E SENHA DA SUA REDE!).
 
   Serial.println(WiFi.localIP());//Printa o IP que foi consebido ao ESP8266 (este ip que voce ira acessar).
   servidor.begin();//Inicia o Servidor.
   
   pinMode(D4, OUTPUT);//Define o LED_BUILTIN como Saida.

  Calcular_Corrente.current(SENSOR, CALIBRACAO); // função da classe EnergyMonitor 
 
    Serial.begin(9600);
  
}

void loop() {

  http();//Sub rotina para verificaçao de clientes conectados. 

 float Irms =  Calcular_Corrente.calcIrms(1480);   // Calcula o valor da Corrente 
    
sensor.teste(Irms);         // Função testar o valor da corrente
sensor.show(Irms ,TENSAO);  // Função mostrar valores na tela
}


void http()//Sub rotina que verifica novos clientes e se sim, envia o HTML.
{
   cliente = servidor.available();//Diz ao cliente que há um servidor disponivel.
 
   if (cliente == true)//Se houver clientes conectados, ira enviar o HTML.
   {
      String req = cliente.readStringUntil('\r');//Faz a leitura do Cliente.
      Serial.println(req);//Printa o pedido no Serial monitor.
 
      if (req.indexOf("/LED") > -1)//Caso o pedido houver led, inverter o seu estado.
      {
         digitalWrite(D4, !digitalRead(D4));//Inverte o estado do led.
      }
 
      html = "";//Reseta a string.
      html += "HTTP/1.1 Content-Type: text/html\n\n";//Identificaçao do HTML.
      html += "<!DOCTYPE html><html><head><title>ESP8266 WEB</title>";//Identificaçao e Titulo.
      html += "<meta name='viewport' content='user-scalable=no'>";//Desabilita o Zoom.
      html += "<style>h1{font-size:2vw;color:black;}</style></head>";//Cria uma nova fonte de tamanho e cor X.
      html += "<body bgcolor='ffffff'><center><h1>";//Cor do Background
 
      //Estas linhas acima sao parte essencial do codigo, só altere se souber o que esta fazendo!
 
      html += "<form action='/LED' method='get'>";//Cria um botao GET para o link /LED
      html += "<input type='submit' value='LED' id='frm1_submit'/></form>";
 
      html += "</h1></center></body></html>";//Termino e fechamento de TAG`s do HTML. Nao altere nada sem saber!
      cliente.print(html);//Finalmente, enviamos o HTML para o cliente.
      cliente.stop();//Encerra a conexao.
   }
}
