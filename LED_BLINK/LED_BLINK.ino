void setup() {
  // define pin 3 as output since LED is connected to Pin 3
  pinMode(3, OUTPUT);

}

void loop() {
  // Make pin 3 status HIGH
  digitalWrite(3,HIGH);
  delay(1000);
   // Make pin 3 status LOW
  digitalWrite(3,LOW);
  delay(1000);


}
