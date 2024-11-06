// C++ code
//
//#include <Arduino.h> //descomentar caso estiver usando platformio


#define c 262 //do
#define d 294 //re
#define e 330 //mi
#define f 349 //fa
#define g 392 //sol
#define a 440 //la
#define b 494 //si

#define pinLed 4
#define pinBotao 5
#define pinBuzzer 6

void setup() {
  //definindo o pino 4 como um comando de saida
  pinMode(pinLed,OUTPUT);
  //definindo o pino 5 como um comando de entrada
  pinMode(pinBotao,INPUT);
  
  //definindo o pino do buzzer
  pinMode(pinBuzzer,OUTPUT);

}

void loop() {
  //como estamos trabalhando com um botão pulldown quando apertamos o botão a energia vai passar pelo caminho de menor resistência 
  if(digitalRead(pinBotao) == HIGH){ 
    //elevar o led para o estado alto assim ligando ele 
    digitalWrite(pinLed,HIGH);
    
    //toca nota no pinBuzzer tone(pino,frequencia,tempo);
    //tone(pinBuzzer,C,500);
    tone(pinBuzzer,c);
  } else{
    //elevar o led para o estado baixo assim ligando ele 
    digitalWrite(pinLed,LOW);
    //parando de tocar qualquer nota no buzzer
    noTone(pinBuzzer);
  }
  
}
