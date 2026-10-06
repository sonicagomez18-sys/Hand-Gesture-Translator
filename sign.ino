#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
int threshold=400;
void setup()
{
lcd.begin(16, 2);
Serial.begin(9600);
lcd.print("Sign Interpreter");
}
void loop()
{
if(analogRead(A0)<threshold)
{
Serial.println("Food");
lcd.setCursor(0, 1);
lcd.print("Food ");
}
{
if(analogRead(A1)<threshold)
Serial.println("Water ");
lcd.setCursor(0, 1);
lcd.print("Water ");
}
if(analogRead(A2)<threshold)
{
Serial.println("Toilet ");
lcd.setCursor(0, 1);
lcd.print("Toilet ");
}
{
if(analogRead(A3)<threshold)
Serial.println("TV ");
lcd.setCursor(0, 1);
lcd.print("TV ");
}
delay(100);
}
