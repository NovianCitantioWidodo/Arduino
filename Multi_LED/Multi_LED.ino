int incomingByte = 0;

void setup() {
  Serial.begin(9600);  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  if (Serial.available() < 1) {
     return;
  }
  incomingByte = Serial.read();
  // LED-1   
  if (incomingByte == 65){
     digitalWrite(2, HIGH);
   }               
if (incomingByte == 66) {
    digitalWrite(2, LOW);  
} 
//LED-2           
if (incomingByte == 67) {
    digitalWrite(3, HIGH);
}  
if (incomingByte == 68) {
    digitalWrite(3, LOW);   
} 
//LED-3          
if (incomingByte == 69) {
    digitalWrite(4, HIGH); 
} 
if (incomingByte == 70) {
    digitalWrite(4, LOW); 
} 
//LED-4           
if (incomingByte == 71) {
   digitalWrite(5, HIGH); 
} 
if (incomingByte == 72) {
   digitalWrite(5, LOW); 
}              
}
