/*
 *Compuertas logicas activadas con pulsadores 
 */
 
#define LED 10

const int P1 = 9; const int P2 =8;   //Push-button 1 and 2
int A; int B;
const int S1=5; const int S2=6; const int S3=7;
int x1; int x2; int x3;   //Variable

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(A, INPUT); pinMode(B, INPUT);
  pinMode(S1, INPUT); pinMode(S2, INPUT); pinMode(S3, INPUT);
}

void loop() {
  x1=digitalRead(S1); x2=digitalRead(S2); x3=digitalRead(S3);
  A=digitalRead(P1); B= digitalRead(P2);

  //We define the logic gates
  // NOT gate
  if(x1>0 and x2==0 and x3==0){
    if(A>0){
      digitalWrite(LED, LOW);
      //Serial.println("NOT: Apagado");
    }
    else{
      digitalWrite(LED, HIGH);
     // Serial.println("NOT: Encendido");
    }
    }
    
    // Compuerta AND
    if(x1 and x2 >0 and x3==0){

      if(A and B >0){
        digitalWrite(LED, HIGH);
       // Serial.println("AND: Encendido");
      }
      else{
        digitalWrite(LED, LOW);
      //  Serial.println("AND: Apagado");
      }
    }
    // Compuerta or
    if(x1==0 and x2>0 and x3==0){

      if(A==0 and B == 0){
        digitalWrite(LED, LOW);
      //  Serial.println("OR: Apagado");
      }
      else{
        digitalWrite(LED, HIGH);
      //  Serial.println("OR: Encendido");
      }
    }
    //Normal
    if(x1==0 and x2==0 and x3==0){

      if(A>0){
        digitalWrite(LED, HIGH);
       // Serial.println("Encendido");
      }
      else{
        digitalWrite(LED,LOW);
      //  Serial.println("Apagado");
      }
    }
    //NAND
    if(x1==0 and x2 == 0 and x3>0){
      
      if(A >0 and B >0){
        digitalWrite(LED,LOW);
     // Serial.println("NAND: Apagado");
      }
      else{
        digitalWrite(LED, HIGH);
      //Serial.println("NAND: Encedido");
      }
    }
    //NOR
    if(x1==0 and x2>0 and x3>0){

      if(A >0 or B >0){
        digitalWrite(LED, LOW);
       // Serial.println("NOR: Apagado");
      }
      else{
        digitalWrite(LED, HIGH);
      //  Serial.println("NOR: Encendido");
      }
    }
    //EXOR
    if(x1 and x2 and x3 >0){

      if(A == B){
        digitalWrite(LED, LOW);
      //  Serial.println("EXOR: Apagado");
      }
      else{
        digitalWrite(LED, HIGH);
      //  Serial.println("EXOR: Encendido");
      }
    }
    //NEXOR
    if(x1 and x3 >0 and x2 ==0){

      if(A == B){
        digitalWrite(LED, HIGH);
      //  Serial.println("NEXOR: Encendido");
      }
      else{
        digitalWrite(LED, LOW);
      //  Serial.println("NEXOR: Apagado");
      }
    }

}
