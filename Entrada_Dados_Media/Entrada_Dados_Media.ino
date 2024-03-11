//variaveis
float n1, n2, n3, p1, p2, p3, media;



void setup() {

  Serial.begin(9600);

  delay(1000);

}

void loop() {

  Serial.print("Digite a nota 1: ");
  while(Serial.available() == 0){
    //Aguarde a entrada de valores do usuário
  }

  //Lê o valor do serial e guarda na variável n1
  n1 = Serial.parseFloat();
  Serial.println(n1);

  Serial.print("Digite a nota 2: ");
  while(Serial.available() == 0){
    //Aguarda a entrada da nota 2
  }

  n2 = Serial.parseFloat();
  Serial.println(n2);

  Serial.print("Digite a nota 3: ");
  while(Serial.available() == 0){
    //Aguarda a entrada da nota 3
  }

  n3 = Serial.parseFloat();
    Serial.println(n3);


  //Atribuição dos pesos
  Serial.print("Digite o peso 1: ");
  while(Serial.available() == 0){
    //Aguarda a entrada do peso 1
  }

  p1 = Serial.parseFloat();
  Serial.println(p1);

    //Atribuição dos pesos
  Serial.print("Digite o peso 2: ");
  while(Serial.available() == 0){
    //Aguarda a entrada do peso 2
  }

  p2 = Serial.parseFloat();
  Serial.println(p2);

    //Atribuição dos pesos
  Serial.print("Digite o peso 3: ");
  while(Serial.available() == 0){
    //Aguarda a entrada do peso 3
  }

  p3 = Serial.parseFloat();
  Serial.println(p3);

  media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);

  Serial.print("A média é: ");
  Serial.println(media);
  delay(1000);



}


//criando uma função chamada
float aguardaEntrada(){
  while(!Serial.available()){
    //Aguarda até que um valor seja selecionado
  }
  //retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}