// C++ code
//
//#include <Arduino.h> //descomentar caso estiver usando platformio
#include <LiquidCrystal_I2C.h>


//instanciando o lcd (endereço, colunas, linhas)
LiquidCrystal_I2C lcd(0x27, 16, 2);


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
  //inicializando o lcd
  lcd.init();

  //ligando o backlight do lcd
  lcd.backlight();
  

  //definindo o pino 4 como um comando de saida
  pinMode(pinLed,OUTPUT);
  //definindo o pino 5 como um comando de entrada
  pinMode(pinBotao,INPUT);
  
  //definindo o pino do buzzer
  pinMode(pinBuzzer,OUTPUT);

}

void escreverNome(){
  //vai escrever "Seu nome?" na linha 0 da tela lcd coluna 0
  lcd.setCursor(0, 0);
  lcd.print("Seu nome?");

  if(digitalRead(pinBotao) == HIGH){
    //vai escrever Nome: na linha 1 da tela lcd
    lcd.setCursor(0, 1);
    lcd.print("Nome: ");
    //vai escrever o nome na tela lcd na linha 1 coluna 6
    lcd.setCursor(6, 1);
    //substituir  _____ pelo nome
    lcd.print("_____");
  } else {
    lcd.setCursor(0, 1);
    //vai limpar a linha 1 da tela lcd pode ser substituido por lcd.clear();
    lcd.print("               ");
  }
}

void botao(){
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

void loop() {
  escreverNome();
  botao();
}
