int soundSensorPin = A0;
int soundSensorValue = 0;
void setup() {
  pinMode(soundSensorPin,INPUT);
  Serial.begin(9600);
  Serial.println("Testing HW-484 sound sensor : ");

}

void loop() {
  soundSensorValue = analogRead(soundSensorPin);
  int volume = map(soundSensorValue,0,1023,0,100);

  Serial.print("Volume % = ");
  Serial.println(volume);

  delay(500);



}
