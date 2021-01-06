#include "DHT.h"
#define Type DHT11
#define ledRouge 8
#define ledVert 7
#define sensorPin 2

DHT objectDHT11(sensorPin, Type);

void setup() 
{
  Serial.begin(9600);
  objectDHT11.begin();
  pinMode(ledVert, OUTPUT);
  pinMode(ledRouge, OUTPUT);
  }
void loop() 
  {
  int temperature = objectDHT11.readTemperature();
  //Serial.print("Temperature = ");
  Serial.print(temperature);
  //Serial.print("°C");
  Serial.println();
  delay(1000);  
  if (temperature<=26)
  {
     ledOn (ledVert);
  }
  else {
     ledOn (ledRouge);
     }}
     void ledOn(int ledPin1){
  digitalWrite(ledPin1, HIGH);
  }
  void ledOff(int ledPin2)
  {
  digitalWrite(ledPin2, LOW);
  }
