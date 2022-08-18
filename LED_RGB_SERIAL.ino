#define ROJO 9
#define VERDE 10
#define AZUL 11

int x=255;
String rojo; String verde; String azul; 
String x1; String x2; String x3; String x4; String x5;
String x6; String x7; String x8; String x9; String lee_cadena;

void setup() {
  Serial.begin(9600);
  pinMode(ROJO,OUTPUT); pinMode(VERDE,OUTPUT); pinMode(AZUL,OUTPUT);

}

void loop() {
  //Mientras el Serial este abierto, lee lo que está en el Serial y concatena c.
  while(Serial.available()){
    delay(50); //Es el tiempo que tarda en leer el caracter
    char c = Serial.read();
    lee_cadena  += c;
  }
  /*Si la longitud de lo introducido en el Serial es > 0, entonces,
   definimos x1 como el primer caracter, x2 el segundo,...
   */
  if(lee_cadena.length() >0){
    x1=lee_cadena[0]; x2=lee_cadena[1]; x3=lee_cadena[2]; rojo=x1+x2+x3;
    x4=lee_cadena[4]; x5=lee_cadena[5]; x6=lee_cadena[6]; verde=x4+x5+x6;
    x7=lee_cadena[8]; x8=lee_cadena[9]; x9=lee_cadena[10]; azul=x7+x8+x9;
  
    //Ingresa el valor obtenido desde el SEREAL y se convierte de caracter a entero,
    //ademas de convertir de anodo comun a catodo comun.
    analogWrite(ROJO,x-rojo.toInt()); 
    analogWrite(VERDE,x-verde.toInt());
    analogWrite(AZUL,x-azul.toInt());

//Imprimimos las variables y ".println" nos imprime en renglones y no en solo renglon de manera continua.
    Serial.print("ROJO: "); Serial.print(rojo);
    Serial.print(" VERDE: "); Serial.print(verde);
    Serial.print(" AZUL: "); Serial.println(azul);
    
  }

  lee_cadena=""; //Inicializamos la cadena de caaracteres recibidos
  

}
