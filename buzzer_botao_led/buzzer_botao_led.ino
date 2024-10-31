// C++ code
//
//#include <Arduino.h> //descomentar caso estiver usando platformio


#define C 262
#define D 294
#define E 330
#define F 349
#define G 392
#define A 440
#define B 494

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
    
    //toca nota no pinBuzzer
    tone(pinBuzzer,C);
  } else{
    //elevar o led para o estado baixo assim ligando ele 
    digitalWrite(pinLed,LOW);
    //parando de tocar qualquer nota no buzzer
    noTone(pinBuzzer);
  }
  
}
