#define pinLed 4


void setup() {
  //definindo o pino 4 como um comando de saida
  pinMode(pinLed,OUTPUT);

}

void loop() {
  //elevando o sinal do pino 4 a ~5v
  digitalWrite(pinLed,HIGH);
  delay(500); // esperando o 500 milissegundos
  //descendo o sinal do pino 4 a ~0v
  digitalWrite(pinLed,LOW);
  delay(500); // esperando o 500 milissegundos
}
