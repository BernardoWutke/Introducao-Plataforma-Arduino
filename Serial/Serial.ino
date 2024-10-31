void setup() {
  Serial.begin(9600);
  Serial.println("Hello, World!");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello, world!");
  Serial.println("A cada um segundo");
  delay(1000);
}
