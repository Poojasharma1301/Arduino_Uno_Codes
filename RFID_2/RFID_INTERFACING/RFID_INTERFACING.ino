#include <LiquidCrystal.h>                                              
const int rs = PB11, en = PB10, d4 = PB0, d5 = PB1, d6 = PC13, d7 = PC14;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int count = 0 ;
char RFID[12];

void setup()
{
    lcd.begin(16, 2);                 
    Serial1.begin(9600);              
    pinMode(PA10,INPUT);   
  
    lcd.print("CIRCUIT DIGEST");       //Prints at LCD display
    lcd.setCursor(0, 1);               //Set courser to second line
    lcd.print("RFID WITH STM32");      //Prints at LCD display
    delay(5000);                       //Delay for 5 Seconds
    lcd.clear();                       //Clears LCD display
    lcd.setCursor(0,0);                //Sets cursor at First Line
    lcd.print("RFID TAG NO:");         //Prints at LCD display
    lcd.setCursor(0,1);                //Sets cursor at Second line
}

void loop()
{
   while(Serial1.available() && count < 12)         
  {

     RFID[count] = Serial1.read();                 
     count++;

     lcd.print(RFID[count]);                        

     if (count==12)
              {
                   lcd.print("             ");
                   count = 0;                         
                   lcd.setCursor(0, 1);               
                }
 }
  
}
