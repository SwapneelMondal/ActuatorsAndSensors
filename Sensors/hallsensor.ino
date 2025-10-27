int hallPin = A0;
int hallValue = 0;
void setup() {
  pinMode(hallPin,INPUT);
  Serial.begin(9600);
  Serial.println("Testing HW-484 hall effect sensor : ");

}

void loop() {
  hallValue = analogRead(hallPin);
  int field = map(hallValue,0,1023,0,100);

  Serial.print("Field Strength % = ");
  Serial.println(field);

  delay(500);



}
