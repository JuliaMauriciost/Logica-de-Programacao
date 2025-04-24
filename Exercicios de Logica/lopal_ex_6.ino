//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

//Variáveis
float numeroPolegada = 0;
float numeroCm = 0;

void setup()
{
  Serial.begin(9600);//Entrada 
}

void loop()
{
  //Entrada 
  Serial.println("Digite uma medida em polegadas");//pergunta uma medida em polegadas da escolha do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  numeroPolegada = Serial.parseFloat();//resposta do usuário
  
 //processamento
 numeroCm = numeroPolegada / 2.54;
  
 //saída
 Serial.println("A conversao de centimetro para polegada eh: " + String (numeroCm) );
 delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
}