//constante para o pino da buzzer
#define pinoBuzzer 2

//constante para o botao
#define Button 3


//constante do led
#define led1 4

#define led2 5

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(Button, INPUT);

  delay(1000);  
}
void loop() {
  
  digitalRead(Button);

  if(digitalRead(Button) == 1){
  tone(pinoBuzzer, 523);
  digitalWrite(led1, HIGH);
  }
  else{
  noTone(pinoBuzzer);
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  }
}
