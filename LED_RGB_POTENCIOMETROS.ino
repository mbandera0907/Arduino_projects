/*Definimos los pines para cada led
 *
 */
#define LED_ROJO 11
#define LED_VERDE 10
#define LED_AZUL 9

// Definimos las variables como los potenciometros y color a variar
int pot_rojo=0;
int pot_verde=1;
int pot_azul=2;
int Rojo; int Verde; int Azul; int x=255;

const int foto_res = 6; int valor_foto;

void setup() {
  Serial.begin(9600); //definimos la velocidad de transferencia de datos
  pinMode(LED_ROJO, OUTPUT); pinMode(LED_VERDE, OUTPUT); pinMode(LED_AZUL,OUTPUT);
  pinMode(foto_res, INPUT);

}

void loop() {
  //Conversión (dividimos entre 4 para que el potenciometro comience desde cero 
  //y no en un número negativo o mmayor a cero)
  
  Rojo=analogRead(pot_rojo)/4;
  Verde=analogRead(pot_verde)/4;
  Azul=analogRead(pot_azul)/4;

  analogWrite(LED_ROJO, Rojo); 
  analogWrite(LED_VERDE, Verde); 
  analogWrite(LED_AZUL, Azul);

  valor_foto = digitalRead(foto_res);

  //Convertimos de anodo a catodo común
  Rojo= x-Rojo; Verde=x-Verde; Azul=x-Azul;
  
  //Imprimimos en el serial la variación de los datos
  Serial.print("Rojo: ");  //Imprime la palabara Rojo:
  Serial.print(Rojo);  //Imprime los valores de Rojo
  Serial.print(" Verde: ");
  Serial.print(Verde);
  Serial.print(" Azul: ");
  Serial.println(Azul);

  Serial.print("Intensidad: ");
  Serial.println(valor_foto);

  delay(300); //Es el retraso para modificar los valores de los potenciommetros
  
}
