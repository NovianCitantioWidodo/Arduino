int PinTinggi = A0;
int PinSuhu = A1;
byte PinCahaya= A2;
byte LedCahaya= 2;
 
void setup(){
  pinMode(LedCahaya, OUTPUT);
  Serial.begin(9600);
}
 
void loop(){
    SensorTinggi();
    SensorCahaya();
    SensorSuhu(); 
    Serial.print("\n");
    delay(3000);
}

int SensorTinggi() {
  int NilaiSensor = analogRead(PinTinggi);
  Serial.print("Nilai Tinggi: ");
  Serial.println(1023 - NilaiSensor);
}

int SensorCahaya() {
  int NilaiSensor = analogRead(PinCahaya);
  Serial.print("Nilai Cahaya: ");
  Serial.println(NilaiSensor);
  if(NilaiSensor < 500){
    digitalWrite(LedCahaya, HIGH);
  }
  else{
    digitalWrite(LedCahaya, LOW);
  }
}

int SensorSuhu() {
  int NilaiSensor = analogRead(PinSuhu) / 2.0479;
  Serial.print("Nilai Suhu: ");
  Serial.println(NilaiSensor);
  if(NilaiSensor < 25){
    digitalWrite(LedCahaya, HIGH);
  }
  else{
    digitalWrite(LedCahaya, LOW);
  }
}
