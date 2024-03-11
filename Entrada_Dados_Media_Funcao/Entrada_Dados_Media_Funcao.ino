//variaveis
float n1, n2, n3, p1, p2, p3, media;



void setup() {

  Serial.begin(9600);

  delay(1000);

}

void loop() {

  Serial.print("Digite a nota 1: ");
  //Lê o valor do serial e guarda na variável n1
  n1 = aguardaEntrada();
  Serial.println(n1);

  Serial.print("Digite a nota 2: ");
  n2 = aguardaEntrada();
  Serial.println(n2);

  Serial.print("Digite a nota 3: ");
  n3 = aguardaEntrada();
  Serial.println(n3);


  //Atribuição dos pesos
  Serial.print("Digite o peso 1: ");
  p1 = aguardaEntrada();
  Serial.println(p1);

    //Atribuição dos pesos
  Serial.print("Digite o peso 2: ");
  p2 = aguardaEntrada();
  Serial.println(p2);

    //Atribuição dos pesos
  Serial.print("Digite o peso 3: ");
  p3 = aguardaEntrada();
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