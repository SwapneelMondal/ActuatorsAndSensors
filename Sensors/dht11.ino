#include "DHT.h"

int DHTPIN = 2;
int DHTTYPE = DHT11;

DHT dht(DHTPIN,DHTTYPE);

void setup(){
  Serial.begin(9600);
  dht.begin();
  Serial.println("Testing DHT11 sensor");
}

void loop(){

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if(isnan(humidity)||isnan(temperature)){
    Serial.println("DHT11 failed to detect anything");
  }
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%");
  Serial.print(" Temperature: ");
  Serial.print(temperature);
  Serial.println(" celsius");

  delay(2000);


}