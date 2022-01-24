#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);  

const byte led0 = 3;
const byte led1 = 4;

//********** Setup ****************************************************************
void setup() 
{
  lcd.begin(16, 2); 

  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
}

//********** Loop *****************************************************************
void loop()
{
    //Mensaje 1
  digitalWrite(led0, HIGH);
  lcd.setCursor(5 , 0);          
  lcd.write("Arnau");      
  lcd.setCursor(3, 1);         
  lcd.write("Divins Mas");   
  delay(3500);                 
  lcd.clear(); 
  digitalWrite(led0, LOW);

  delay(1000);
               
    //Mensaje 2
  digitalWrite(led1, HIGH); 
  lcd.setCursor(5, 0);         
  lcd.write("Arnau");       
  lcd.setCursor(3, 1);          
  lcd.write("Mas Divins");   
  delay(3500);                 
  lcd.clear();      
  digitalWrite(led1, LOW); 

  delay(1000);
}
