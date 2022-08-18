/*
 * Ejercicio. 
 * Una una prensa funciona al activar 3 pulsadores,
 * si solo se pulsan dos de ellos, la prensa funcionará
 * pero sonará una alarma. Si solo se pulsa un boton,
 * la prensa no funcionará.
 */

#define PRENSA 13
#define ALARMA 8

int P1=5, P2=6, P3=7;  //Pulsadores
byte A,B,C;

void setup() {
  Serial.begin(9600);
  pinMode(PRENSA, OUTPUT);
  pinMode(ALARMA, OUTPUT);
  pinMode(P1, INPUT); pinMode(P2, INPUT); pinMode(P3, INPUT);

}

void loop() {
  A=digitalRead(P1); 
  B=digitalRead(P2);
  C=digitalRead(P3);
  Serial.println(A); Serial.println(B); Serial.println(C);
  
  //Prensa 
  if(C&&(A||B)||B&&A >0){
    digitalWrite(PRENSA, HIGH);
  }
  else{
    digitalWrite(PRENSA, LOW);
  }
  //Alarma
  if((A||B||C)&&!(A&&B&&C) >0){
    digitalWrite(ALARMA, HIGH);
  }
  else{
    digitalWrite(ALARMA, LOW);
  }

  
}
