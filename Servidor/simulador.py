
import requests

while(True):
    
   valor = int(input("Informe um valor: "))
   valor =+2
   
   r = requests.post("http://iot-2020.herokuapp.com/upload", json={"LDR":valor})
   print(r.status_code)

