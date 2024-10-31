// C++ code
//
#include <Arduino.h> //descomentar caso estiver usando platformio


#define c 261
#define d 294
#define e 329
#define f 349
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466
#define cH 523
#define cSH 554
#define dH 587
#define dSH 622
#define eH 659
#define fH 698
#define fSH 740
#define gH 784
#define gSH 830
#define aH 880

#define pinBuzzer  6
#define pinLed  4
#define pinButton  5


void setup()    
{    
  //definindo o pino do buzzer como saida
  pinMode(pinBuzzer, OUTPUT);   

  //definindo o pino do led como saida
  pinMode(pinLed, OUTPUT);

  //definindo o pino do botão como entrada
  pinMode(pinButton, INPUT);

}    
     
void loop()   // run over and over again
{
  if(digitalRead(pinButton) == HIGH)
  {
    march();
  } else {
    noTone(pinBuzzer);
  }
 
}    
     
void tocar (int pin, int frequencyInHertz, long timeInMilliseconds)
{ 
    //ligando o led no inicio da nota
    digitalWrite(pinLed, HIGH);

    //definindo o pino que vai ser tocado e a nota
    tone(pin,frequencyInHertz);
    //definindo o tempo que vai ser tocado
    delay(timeInMilliseconds);
    
    //definindo o tempo de espera para tocar a proxima nota
    noTone(pin);
    delay(20);

    //desligando o led no final da nota
    digitalWrite(pinLed, LOW);
}    
     
void march()
{    
    
    tocar(pinBuzzer, a, 500); 
    tocar(pinBuzzer, a, 500);     
    tocar(pinBuzzer, a, 500); 
    tocar(pinBuzzer, f, 350); 
    tocar(pinBuzzer, cH, 150);
    
    tocar(pinBuzzer, a, 500);
    tocar(pinBuzzer, f, 350);
    tocar(pinBuzzer, cH, 150);
    tocar(pinBuzzer, a, 1000);

    
    tocar(pinBuzzer, eH, 500);
    tocar(pinBuzzer, eH, 500);
    tocar(pinBuzzer, eH, 500);    
    tocar(pinBuzzer, fH, 350); 
    tocar(pinBuzzer, cH, 150);
    
    tocar(pinBuzzer, gS, 500);
    tocar(pinBuzzer, f, 350);
    tocar(pinBuzzer, cH, 150);
    tocar(pinBuzzer, a, 1000);

    
    tocar(pinBuzzer, aH, 500);
    tocar(pinBuzzer, a, 350); 
    tocar(pinBuzzer, a, 150);
    tocar(pinBuzzer, aH, 500);
    tocar(pinBuzzer, gSH, 250); 
    tocar(pinBuzzer, gH, 250);
    
    tocar(pinBuzzer, fSH, 125);
    tocar(pinBuzzer, fH, 125);    
    tocar(pinBuzzer, fSH, 250);
    delay(250);
    tocar(pinBuzzer, aS, 250);    
    tocar(pinBuzzer, dSH, 500);  
    tocar(pinBuzzer, dH, 250);  
    tocar(pinBuzzer, cSH, 250);  

    
    tocar(pinBuzzer, cH, 125);  
    tocar(pinBuzzer, b, 125);  
    tocar(pinBuzzer, cH, 250);      
    delay(250);
    tocar(pinBuzzer, f, 125);  
    tocar(pinBuzzer, gS, 500);  
    tocar(pinBuzzer, f, 375);  
    tocar(pinBuzzer, a, 125); 
    
    tocar(pinBuzzer, cH, 500); 
    tocar(pinBuzzer, a, 375);  
    tocar(pinBuzzer, cH, 125); 
    tocar(pinBuzzer, eH, 1000); 
   
    
    tocar(pinBuzzer, aH, 500);
    tocar(pinBuzzer, a, 350); 
    tocar(pinBuzzer, a, 150);
    tocar(pinBuzzer, aH, 500);
    tocar(pinBuzzer, gSH, 250); 
    tocar(pinBuzzer, gH, 250);
    
    tocar(pinBuzzer, fSH, 125);
    tocar(pinBuzzer, fH, 125);    
    tocar(pinBuzzer, fSH, 250);
    delay(250);
    tocar(pinBuzzer, aS, 250);    
    tocar(pinBuzzer, dSH, 500);  
    tocar(pinBuzzer, dH, 250);  
    tocar(pinBuzzer, cSH, 250);  
 
    
    tocar(pinBuzzer, cH, 125);  
    tocar(pinBuzzer, b, 125);  
    tocar(pinBuzzer, cH, 250);      
    delay(250);
    tocar(pinBuzzer, f, 250);  
    tocar(pinBuzzer, gS, 500);  
    tocar(pinBuzzer, f, 375);  
    tocar(pinBuzzer, cH, 125); 
           
    tocar(pinBuzzer, a, 500);            
    tocar(pinBuzzer, f, 375);            
    tocar(pinBuzzer, c, 125);            
    tocar(pinBuzzer, a, 1000);         
}
