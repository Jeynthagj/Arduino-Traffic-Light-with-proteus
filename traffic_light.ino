#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

void setup() 
{
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(8,OUTPUT);
 lcd.begin(16,2);
}

void loop() {
int i;
//red

  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(8,HIGH);
  
  
  for(i=20;i>=0;i--)
  {
    lcd.setCursor(0,0);
    lcd.print("FOLLOW THE RULES");
    lcd.setCursor(8,1);
    lcd.print(i);
    delay(500);
    lcd.clear();
  }

//yellow

  digitalWrite(13,LOW);
  digitalWrite(8,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  
  for(i=15;i>=0;i--)
  {
    lcd.setCursor(0,0);
    lcd.print("WEAR HELMET");
    lcd.setCursor(8,1);
    lcd.print(i);
    delay(500);
    lcd.clear();
  }
  
//green

  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);

  for(i=25;i>=0;i--)
  {
    lcd.setCursor(0,0);
    lcd.print("STOP LOOK GO");
    lcd.setCursor(8,1);
    lcd.print(i);
    delay(500);
    lcd.clear();
  }

//yellow

  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  
  for(i=15;i>=0;i--)
  {

    lcd.setCursor(0,0);
    lcd.print("SEAT BELT SAVES");
    lcd.setCursor(8,1);
    lcd.print(i);
    delay(500);
    lcd.clear();
  }

  //  lcd.setCursor(0,0);
//   lcd.print("follow lanes");
//   for(int i=0;i<18;i++)
//   {
//     lcd.scrollDisplayRight();
//     delay(150);
//   }
//   delay(1000);
}




 