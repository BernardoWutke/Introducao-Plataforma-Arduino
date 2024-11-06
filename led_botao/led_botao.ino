//#include <Arduino.h> //descomentar caso estiver usando platformio

#define pinLed 4
#define pinBotao 5

void setup() {
  //definindo o pino 4 como um comando de saida
  pinMode(pinLed,OUTPUT);
  //definindo o pino 5 como um comando de entrada
  pinMode(pinBotao,INPUT);

}

void loop() {
  //como estamos trabalhando com um botão pulldown quando apertamos o botão a energia vai passar pelo caminho de menor resistência 
  if(digitalRead(pinBotao) == HIGH){ 
    digitalWrite(pinLed,HIGH);
  } else{
    digitalWrite(pinLed,LOW);
  }
}
