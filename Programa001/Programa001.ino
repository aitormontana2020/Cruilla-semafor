/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int Vermell1 = 5;          // donar nom al pin 5 de l’Arduino
const int Groc1 = 6;          // donar nom al pin 6 de l’Arduino
const int Verd1 = 7;          // donar nom al pin 7 de l’Arduino
const int Vermell2 = 8;       // donar nom al pin 7 de l’Arduino
const int Groc2 = 9;          // donar nom al pin 9 de l’Arduino
const int Verd2 = 10;         // donar nom al pin 10 de l’Arduino
unsigned int temp = 1000;
//********** Setup ****************************************************************
void setup ()
{
  pinMode(Vermell1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(Groc1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(Verd1, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(Vermell2, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(Groc2, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(Verd2, OUTPUT);     // definir el pin 10 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(Vermell1, HIGH);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, LOW);    // posar a 5V el pin 7

  digitalWrite(Vermell2, HIGH);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, LOW);    // posar a 5V el pin 10
   
  delay(temp);                  // es queden leds 500ms encesos
  
  digitalWrite(Vermell1, HIGH);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, LOW);    // posar a 5V el pin 7
  
  digitalWrite(Vermell2, LOW);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, HIGH);    // posar a 5V el pin 10
 
  delay(temp);                  // es queden leds 500ms encesos
  
  digitalWrite(Vermell1, HIGH);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, LOW);    // posar a 5V el pin 7
  
  digitalWrite(Vermell2, LOW);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, HIGH);    // posar a 5V el pin 10
 
  delay(temp);                  // es queden leds 500ms encesos

   digitalWrite(Vermell1, HIGH);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, LOW);    // posar a 5V el pin 7
  
  digitalWrite(Vermell2, LOW);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, HIGH);    // posar a 5V el pin 10
 
  delay(temp);                  // es queden leds 500ms encesos

   digitalWrite(Vermell1, HIGH);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, LOW);    // posar a 5V el pin 7
  
  digitalWrite(Vermell2, LOW);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, HIGH);    // posar a 5V el pin 10
 
  delay(temp);                  // es queden leds 500ms encesos

  digitalWrite(Vermell1, HIGH);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, LOW);    // posar a 5V el pin 7

  digitalWrite(Vermell2, LOW);    // posar a 5V el pin 8
  digitalWrite(Groc2, HIGH);    // posar a 5V el pin 9
  digitalWrite(Verd2, LOW);    // posar a 5V el pin 10
   
  delay(temp);                  // es queden leds 500ms encesos

  digitalWrite(Vermell1, HIGH);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, LOW);    // posar a 5V el pin 7

  digitalWrite(Vermell2, HIGH);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, LOW);    // posar a 5V el pin 10
   
  delay(temp);                  // es queden leds 500ms encesos

  digitalWrite(Vermell1, LOW);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, HIGH);    // posar a 5V el pin 7
  
  digitalWrite(Vermell2, HIGH);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, LOW);    // posar a 5V el pin 10
 
  delay(temp);                  // es queden leds 500ms encesos

   digitalWrite(Vermell1, LOW);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, HIGH);    // posar a 5V el pin 7
  
  digitalWrite(Vermell2, HIGH);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, LOW);    // posar a 5V el pin 10
 
  delay(temp);                  // es queden leds 500ms encesos

   digitalWrite(Vermell1, LOW);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, HIGH);    // posar a 5V el pin 7
  
  digitalWrite(Vermell2, HIGH);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, LOW);    // posar a 5V el pin 10
 
  delay(temp);                  // es queden leds 500ms encesos

   digitalWrite(Vermell1, LOW);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, HIGH);    // posar a 5V el pin 7
  
  digitalWrite(Vermell2, HIGH);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, LOW);    // posar a 5V el pin 10
 
  delay(temp);                  // es queden leds 500ms encesos

   digitalWrite(Vermell1, LOW);    // posar a 5V el pin 5
  digitalWrite(Groc1, HIGH);    // posar a 5V el pin 6
  digitalWrite(Verd1, LOW);    // posar a 5V el pin 7
  
  digitalWrite(Vermell2, HIGH);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, LOW);    // posar a 5V el pin 10
 
  delay(temp);                  // es queden leds 500ms encesos

   digitalWrite(Vermell1, HIGH);    // posar a 5V el pin 5
  digitalWrite(Groc1, LOW);    // posar a 5V el pin 6
  digitalWrite(Verd1, LOW);    // posar a 5V el pin 7
  
  digitalWrite(Vermell2, HIGH);    // posar a 5V el pin 8
  digitalWrite(Groc2, LOW);    // posar a 5V el pin 9
  digitalWrite(Verd2, LOW);    // posar a 5V el pin 10
 
  delay(temp);                  // es queden leds 500ms encesos
}

//********** Funcions *************************************************************
