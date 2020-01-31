/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int A = 3;          // donar nom al pin 5 de l’Arduino
const int B = 4;          // donar nom al pin 6 de l’Arduino
const int C = 5;          // donar nom al pin 7 de l’Arduino
const int D = 6;       // donar nom al pin 7 de l’Arduino
const int E = 7;          // donar nom al pin 9 de l’Arduino
const int F = 8;
const int G = 9;               // donar nom al pin 10 de l’Arduino
unsigned int temp = 1000;
//********** Setup ****************************************************************
void setup ()
{
  pinMode(A, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 4 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 10
  delay(temp);                  // es queden leds 500ms encesos

  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 10
  delay(temp);                  // es queden leds 500ms encesos

  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 10
  delay(temp);                  // es queden leds 500ms encesos

  digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 10
  delay(temp);                  // es queden leds 500ms encesos

  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, LOW);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 10
  delay(temp);                  // es queden leds 500ms encesos
  
  
 
}

//********** Funcions *************************************************************
