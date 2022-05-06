#include<DHT.h>
#define DHTPIN 8
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(9600);
}

void loop() {  
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  
  Serial.print("Humidity: ");
  Serial.println(h); 
  Serial.print("Temperature: ");
  Serial.println(t);
  delay(1000);
  
}