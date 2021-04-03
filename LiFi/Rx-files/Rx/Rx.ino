#include <SoftwareSerial.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
SoftwareSerial GSerial(11,12); 
char rec=0;

void setup()
{
  Serial.begin(9600);
  GSerial.begin(400);
  lcd.begin();
  lcd.setCursor(0, 0);
  lcd.print(" LiFi - Wireless");
  lcd.setCursor(0, 1);
  lcd.print(" Communication  ");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(" using Light    ");
  lcd.setCursor(0, 1);
  lcd.print(" RX TESTING ..  ");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("  By Team BMES  ");
  lcd.setCursor(0,1); 
  lcd.print("    bm-es.com   ");
  delay(1000);
  lcd.clear();
}

void loop()
{
  if(GSerial.available() != 0)
  {    
    rec = GSerial.read();
    if(rec=='^')
    {
      lcd.setCursor(0, 1);
      lcd.print("                ");
      lcd.setCursor(0, 1);
    }
    else if(rec=='&')
    {
      lcd.clear();
    }
    
    else
    {
      Serial.print(rec);
      lcd.print(rec);
    }
  }
}
