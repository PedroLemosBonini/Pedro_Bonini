#define pinoBuzzer 2
#define notado 3
#define notare 4
#define notami 5
#define notafa 6
#define notaso 7
#define notala 8
#define notasi 9
#define notadoh 10

byte doh, re, mi, fa, so, la, si, pinDo = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(pinoBuzzer,  OUTPUT);

  pinMode(doh, INPUT);
  pinMode(re, INPUT);
  pinMode(mi, INPUT);
  pinMode(fa, INPUT);
  pinMode(so, INPUT);
  pinMode(la, INPUT);
  pinMode(si, INPUT);
  pinMode(pinDo, INPUT);

  Serial.begin(9600);
  delay(500);

}

void loop() {
  // put your main code here, to run repeatedly:

  doh = digitalRead(notado);
  re = digitalRead(notare);
  mi = digitalRead(notami);
  fa = digitalRead(notafa);
  so = digitalRead(notaso);
  la = digitalRead(notala);
  si = digitalRead(notasi);
  pinDo = digitalRead(notadoh);

  //verificando qual nota foi acionada
  if(doh == 1){
    //Ativa a nota dó
    tone(pinoBuzzer, 261);
  }
  else if(re == 1){
    tone(pinoBuzzer, 293);
  }
  else if(mi == 1){
    tone(pinoBuzzer, 329);
  }
  else if(fa == 1){
    tone(pinoBuzzer, 349);
  }
  else if(so == 1){
    tone(pinoBuzzer, 392);
  }
  else if(la == 1){
    tone(pinoBuzzer, 440);
  }
  else if(si == 1){
    tone(pinoBuzzer, 494);
  }
  else if(pinDo == 1){
    tone(pinoBuzzer, 554);
  }
  else{
    noTone(pinoBuzzer);
  }

  delay(50); //tempo de execução da nota musical

}
