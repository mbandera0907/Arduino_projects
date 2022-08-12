# define LED 13

String x1; String x2; String x3;
String A; String B;
String cadena; int i;
void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  while(Serial.available()){
    delay(50);
    char c = Serial.read();
    cadena += c;
  }
  if(cadena.length()>0){
    x1=cadena[0]; x2=cadena[1]; x3=cadena[2];
    A=cadena[3]; B=cadena[4];

    if(x1.toInt()>0 and x2.toInt()==0 and x3.toInt()==0){
   //Compuerta NOT
    if(A.toInt()>0){
      digitalWrite(LED, LOW);
      Serial.println("NOT: Apagado");
    }
    else{
      digitalWrite(LED, HIGH);
      Serial.println("NOT: Encendido");
    }
    }
    // Compuerta AND
    if(x1.toInt() and x2.toInt() >0 and x3.toInt()==0){

      if(A.toInt() and B.toInt() >0){
        digitalWrite(LED, HIGH);
        Serial.println("AND: Encendido");
      }
      else{
        digitalWrite(LED, LOW);
        Serial.println("AND: Apagado");
      }
    }
    // Compuerta or
    if(x1.toInt()==0 and x2.toInt()>0 and x3.toInt()==0){

      if(A.toInt()==0 and B.toInt() == 0){
        digitalWrite(LED, LOW);
        Serial.println("OR: Apagado");
      }
      else{
        digitalWrite(LED, HIGH);
        Serial.println("OR: Encendido");
      }
    }
    //Normal
    if(x1.toInt()==0 and x2.toInt()==0 and x3.toInt()==0){

      if(A.toInt()>0){
        digitalWrite(LED, HIGH);
        Serial.println("Encendido");
      }
      else{
        digitalWrite(LED,LOW);
        Serial.println("Apagado");
      }
    }
    //NAND
    if(x1.toInt()==0 and x2.toInt() == 0 and x3.toInt()>0){
      if(A.toInt()>0 and B.toInt()>0){
        digitalWrite(LED,LOW);
      Serial.println("NAND: Apagado");
      }
      else{
        digitalWrite(LED, HIGH);
      Serial.println("NAND: Encedido");
      }
    }
    //NOR
    if(x1.toInt()==0 and x2.toInt()>0 and x3.toInt()>0){

      if(A.toInt()>0 or B.toInt()>0){
        digitalWrite(LED, LOW);
        Serial.println("NOR: Apagado");
      }
      else{
        digitalWrite(LED, HIGH);
        Serial.println("NOR: Encendido");
      }
    }
    //EXOR
    if(x1.toInt() and x2.toInt() and x3.toInt() >0){

      if(A.toInt() == B.toInt()){
        digitalWrite(LED, LOW);
        Serial.println("EXOR: Apagado");
      }
      else{
        digitalWrite(LED, HIGH);
        Serial.println("EXOR: Encendido");
      }
    }
    //NEXOR
    if(x1.toInt() and x3.toInt() >0 and x2.toInt()==0){

      if(A.toInt() == B.toInt()){
        digitalWrite(LED, HIGH);
        Serial.println("NEXOR: Encendido");
      }
      else{
        digitalWrite(LED, LOW);
        Serial.println("NEXOR: Apagado");
      }
    }
   //Hasta aquí
  }
cadena="";
}
