const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11; 


//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     
  pinMode(segB, OUTPUT);     
  pinMode(segC, OUTPUT);     
  pinMode(segD, OUTPUT);     
  pinMode(segE, OUTPUT);     
  pinMode(segF, OUTPUT);     
  pinMode(segG, OUTPUT);         
}

//********** Loop *****************************************************************
void loop()
{
  {
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);

  delay (1000);

  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  
  delay (1000);

  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);

  delay (1000);

  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);

  delay (1000);

  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);

  delay (1000);
  }
}
