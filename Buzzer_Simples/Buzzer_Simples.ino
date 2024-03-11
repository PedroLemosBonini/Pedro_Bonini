//constante para o pino da buzzer
#define pinoBuzzer 2


//constante do led
#define led1 3

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(led1, OUTPUT);

  delay(1000);  
}
void loop() {
  
  tone(pinoBuzzer, 523);
  digitalWrite(led1, HIGH);
  delay(1000);

  digitalWrite(pinoBuzzer, 0);
  digitalWrite(led1, LOW);
  delay(1000);
}


