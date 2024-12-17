int pPir = 2; //Pin donde se resibe la señal de PIR
int pBuzz = 8; //Pin donse se conecta el buzz
int vPir = 0; //Variable para almacen valores recibidos por el PIR
int tono;
float sinVAL;

void setup() {
 
  Serial.begin(9600); //Iniciando comunicacion serial
  pinMode(pPir, INPUT); //Manejando pPir como entrada
  pinMode(pBuzz, OUTPUT); //Manejando pPir como entrada
}

void loop() {
  vPir = digitalRead(pPir); //Recibiendo valor de PIR
 
  if(vPir == 1){            //Valorando señal de PIR
    Serial.println("Hay presencia");
tone(pBuzz, 1500,100);
    delay(2000);
  }else{
    Serial.println("No hay presencia");
  noTone(pBuzz);
  }

  delay(1000);

}

