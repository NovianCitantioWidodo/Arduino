void setup() 
{
    Serial.begin(9600);  
    // wait for the serial port to connect. Required for Leonardo/Micro native USB port only
    while (!Serial) {  ;  }
}
 
 
void loop() 
{
  Serial.println("1");
  delay(5000);
  Serial.println("0");
  delay(5000);
}
