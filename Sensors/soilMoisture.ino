int sensorPin = A0;
int sensorValue=0;
void setup() {
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
  Serial.println("Testing soil moisture sensor");

}

void loop() {
  sensorValue=analogRead(sensorPin);
  int moisture = map(sensorValue,0,1023,0,100);
  Serial.print("Soil Moisture % = ");
  Serial.println(moisture);

  delay(2000);
}
