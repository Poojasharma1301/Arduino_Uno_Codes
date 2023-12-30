#include <LiquidCrystal.h>                                              
const int rs = PB11, en = PB10, d4 = PB0, d5 = PB1, d6 = PC13, d7 = PC14;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//int count = 0 ;
//char RFID[12];
//char rfid_ref_token[13]="9002BC14DAEY";
//int count_prod = 0;
//double total = 0;

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
    /*count = 0;
    while (Serial.available() && count < 12)
    {
      RFID[count] = Serial.read();
      delay(5);
      lcd.setCursor(0, 0);
        lcd.print("Butter Added       ");
        lcd.setCursor(0, 1);
        lcd.print("Price(Rm):4.00      ");
        delay(2000);
        total = total + 4.00;
        count_prod++;*/
    }
    
  


  
