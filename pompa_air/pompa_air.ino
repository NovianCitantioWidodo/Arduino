int relay = 13;
int inPin = 7;
int button = 0;
int lastbutton;
char baca;

void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  baca = Serial.read();
  button = digitalRead(inPin);
  if (baca == '1') {
    digitalWrite(relay, HIGH);
    Serial.println("POMPA HIDUP");
    return;
  }
  else if (baca == '0') {
    digitalWrite(relay, LOW);
    Serial.println("POMPA MATI");
    return;
  }
  if (button != lastbutton) {
    if (button == HIGH) {
      digitalWrite(relay, HIGH);
      Serial.println("POMPA HIDUP");
    }
    else {
      digitalWrite(relay, LOW);
      Serial.println("POMPA MATI");
    }
  }
  lastbutton = button;
}
