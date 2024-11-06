
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
//objeto lcd ( endereço, colunas, linhas)
LiquidCrystal_I2C lcd(0x27,16,2); 


// notas

#define c 262 //do
#define d 294 //re
#define e 330 //mi
#define f 349 //fa
#define g 392 //sol
#define a 440 //la
#define b 494 //si

// definindo o pino do buzzer
#define BUZZER 3

// definindo o pino do botão
#define BOTAO_C 13
#define BOTAO_D 12
#define BOTAO_E 11
#define BOTAO_F 10
#define BOTAO_G 9
#define BOTAO_A 8
#define BOTAO_B 7


//ao ligar ele vai executar uma vez o setup
void setup()
{
  Serial.begin(9600);

  lcd.init(); 
  lcd.backlight();
  
  pinMode(BUZZER, OUTPUT);

  pinMode(BOTAO_C, INPUT);
  pinMode(BOTAO_D, INPUT);
  pinMode(BOTAO_E, INPUT);
  pinMode(BOTAO_F, INPUT);
  pinMode(BOTAO_G, INPUT);
  pinMode(BOTAO_A, INPUT);
  pinMode(BOTAO_B, INPUT);
}

void tocarMusica();
void lcdVoid();

//fica em loop 16000 por segundo
void loop()
{
  tocarMusica();
  lcdVoid();
}

//função para escrever na tela
void lcdVoid()
{ 
  //fala a posição so eixo x e y que vai escrever na tela lcd( x >= 0 && x <= 16) (y >= 0 && y <= 1);
  lcd.setCursor(0, 0);
  lcd.print(" C D E F G A B");
  if (digitalRead(BOTAO_C) == HIGH){
    lcd.setCursor(0, 1);
    lcd.print("C");
    lcd.setCursor(3, 1);
    lcd.print(String(c) + "Hz");
  } else if (digitalRead(BOTAO_D) == HIGH){
    lcd.setCursor(0, 1);
    lcd.print("D");
    lcd.setCursor(3, 1);
    lcd.print(String(d) + "Hz");
  } else if (digitalRead(BOTAO_E) == HIGH){
    lcd.setCursor(0, 1);
    lcd.print("E");
    lcd.setCursor(3, 1);
    lcd.print(String(e) + "Hz");
  } else if (digitalRead(BOTAO_F) == HIGH){
    lcd.setCursor(0, 1);
    lcd.print("F");
    lcd.setCursor(3, 1);
    lcd.print(String(f) + "Hz");
  } else if (digitalRead(BOTAO_G) == HIGH){
    lcd.setCursor(0, 1);
    lcd.print("G");
    lcd.setCursor(3, 1);
    lcd.print(String(g) + "Hz");
  } else if (digitalRead(BOTAO_A) == HIGH){
    lcd.setCursor(0, 1);
    lcd.print("A");
    lcd.setCursor(3, 1);
    lcd.print(String(a) + "Hz");
  } else if (digitalRead(BOTAO_B) == HIGH){
    lcd.setCursor(0, 1);
    lcd.print("B");
    lcd.setCursor(3, 1);
    lcd.print(String(b) + "Hz");
  } else {
    lcd.setCursor(0, 1);
    lcd.print("               ");
  }
}


//função para tocar as notas musicais
void tocarMusica()
{

  if (digitalRead(BOTAO_C) == HIGH)
  {
    tone(BUZZER, c);
  }
  else if (digitalRead(BOTAO_D) == HIGH)
  {
    tone(BUZZER, d);
  }
  else if (digitalRead(BOTAO_E) == HIGH)
  {
    tone(BUZZER, e);
  }
  else if (digitalRead(BOTAO_F) == HIGH)
  {
    tone(BUZZER, f);
  }
  else if (digitalRead(BOTAO_G) == HIGH)
  {
    tone(BUZZER, g);
  }
  else if (digitalRead(BOTAO_A) == HIGH)
  {
    tone(BUZZER, a);  
  }
  else if (digitalRead(BOTAO_B) == HIGH)
  {
    tone(BUZZER, b);
  }
  else
  {
    noTone(BUZZER);
  }
}