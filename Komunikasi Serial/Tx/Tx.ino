#include <ArduinoJson.h>
#include <SoftwareSerial.h>

SoftwareSerial s(5,6);
 
void setup() {
  s.begin(115200);
  pinMode(A0,INPUT);
}
StaticJsonBuffer<1000> jsonBuffer;
JsonObject& root = jsonBuffer.createObject();
void loop() {
 
  // If the DHT-11 is not connected to correct pin or if it doesnot

  root["gasv"]= analogRead(A0);
 
if(s.available()>0)
{
 root.printTo(s);
}
Serial.println(s);
}
