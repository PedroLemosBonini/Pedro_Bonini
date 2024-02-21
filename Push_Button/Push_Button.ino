//Declaração da constante que armazena o pino do push button
#define pinoButton 8
#define led1 9

//Declaração da variável do estado do botão
bool status = false;

void setup() {
  //Definir a modalidade do pino
  pinMode(pinoButton, INPUT);
  pinMode(led1, OUTPUT);

  Serial.begin(9600);

  delay(1000);

}

void loop() {
    //Lendo o pino digital através da constante
  Serial.println(digitalRead(pinoButton));

  if(digitalRead(pinoButton) == 1 && status == false){
    Serial.println("Botão Apertado ON...");
    status = true;
    digitalWrite(led1, HIGH);
  }
  else if(digitalRead(pinoButton) == 1 && status == true){
    Serial.println("Botão Apertado OFF...");
    status = false;
    digitalWrite(led1, LOW);
  }


  delay(500); //Parada estratégica para leitura


}