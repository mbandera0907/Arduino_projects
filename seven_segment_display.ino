#define A 11
#define B 12
#define F 9
#define G 8
#define E 7
#define D 6
#define C 4
#define P1 2
#define P2 1

int tiempo = 1000; int p1=0; int p2=0;

void setup() {
  for(int i=6; i<=9; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(C, OUTPUT); pinMode(B, OUTPUT); pinMode(A, OUTPUT);
  pinMode(P1, INPUT); pinMode(P2, INPUT);

}

void loop() {
  p1= digitalRead(P1); p2=digitalRead(P2); //Pulsadores

  //Secuencia ascendente
  if(p1>0 and p2==0){
  //CERO
  digitalWrite(A,HIGH); digitalWrite(B,HIGH);digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);digitalWrite(E,HIGH);digitalWrite(F,HIGH);
  digitalWrite(G, LOW); delay(tiempo);
  
  //UNO
  digitalWrite(B,HIGH); digitalWrite(C,HIGH);
  digitalWrite(A,LOW); digitalWrite(F,LOW);
  digitalWrite(E,LOW); digitalWrite(D,LOW);
  digitalWrite(G,LOW); delay(tiempo);

  //DOS
  digitalWrite(A,HIGH); digitalWrite(B,HIGH);
  digitalWrite(C,LOW); digitalWrite(D,HIGH);
  digitalWrite(E,HIGH); digitalWrite(F,LOW);
  digitalWrite(G,HIGH); delay(tiempo);

  //TRES
  digitalWrite(A,HIGH); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,HIGH);
  digitalWrite(E,LOW); digitalWrite(F,LOW);
  digitalWrite(G,HIGH); delay(tiempo);

  //CUATRO
  digitalWrite(A,LOW); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,LOW);
  digitalWrite(E,LOW); digitalWrite(F,HIGH);
  digitalWrite(G,HIGH); delay(tiempo);

  //CINCO
  digitalWrite(A,HIGH); digitalWrite(B,LOW);
  digitalWrite(C,HIGH); digitalWrite(D,HIGH);
  digitalWrite(E,LOW); digitalWrite(F,HIGH);
  digitalWrite(G,HIGH); delay(tiempo);

  //SEIS
  digitalWrite(A,LOW); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,HIGH);
  digitalWrite(E,HIGH); digitalWrite(F,LOW);
  digitalWrite(G,HIGH); delay(tiempo);

  //SIETE
  digitalWrite(A,HIGH); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,LOW);
  digitalWrite(E,LOW); digitalWrite(F,LOW);
  digitalWrite(G,LOW); delay(tiempo);

  //OCHO
  digitalWrite(A,HIGH); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,HIGH);
  digitalWrite(E,HIGH); digitalWrite(F,HIGH);
  digitalWrite(G,HIGH); delay(tiempo);

  //NUEVE
  digitalWrite(A,HIGH); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,HIGH);
  digitalWrite(E,LOW); digitalWrite(F,HIGH);
  digitalWrite(G,HIGH); delay(tiempo);

  digitalWrite(A,LOW); digitalWrite(B,LOW);
  digitalWrite(C,LOW); digitalWrite(D,LOW);
  digitalWrite(E,LOW); digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  }
  
  //Secuencia descendente
  if(p2>0 and p1==0){
  //OCHO
  digitalWrite(A,HIGH); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,HIGH);
  digitalWrite(E,HIGH); digitalWrite(F,HIGH);
  digitalWrite(G,HIGH); delay(tiempo);

  //SEIS
  digitalWrite(A,LOW); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,HIGH);
  digitalWrite(E,HIGH); digitalWrite(F,LOW);
  digitalWrite(G,HIGH); delay(tiempo);

  //CUATRO
  digitalWrite(A,LOW); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,LOW);
  digitalWrite(E,LOW); digitalWrite(F,HIGH);
  digitalWrite(G,HIGH); delay(tiempo);

  //DOS
  digitalWrite(A,HIGH); digitalWrite(B,HIGH);
  digitalWrite(C,LOW); digitalWrite(D,HIGH);
  digitalWrite(E,HIGH); digitalWrite(F,LOW);
  digitalWrite(G,HIGH); delay(tiempo);

  //CERO
  digitalWrite(A,HIGH); digitalWrite(B,HIGH);digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);digitalWrite(E,HIGH);digitalWrite(F,HIGH);
  digitalWrite(G, LOW); delay(tiempo);

  digitalWrite(A,LOW); digitalWrite(B,LOW);
  digitalWrite(C,LOW); digitalWrite(D,LOW);
  digitalWrite(E,LOW); digitalWrite(F,LOW);
  digitalWrite(G,LOW); delay(tiempo);
 
  }

}
