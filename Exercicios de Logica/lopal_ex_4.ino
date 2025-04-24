//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
// / (altura * altura).

//Variáveis
String nome = ""; 
float altura = 0; 
float peso = 0; 
float IMC = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada 
  Serial.println("Digite seu nome");//pergunta o nome do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  nome = Serial.readString();//resposta do usuário
  nome.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite sua altura em metros");//pergunta a altura em metros  do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  altura = Serial.parseFloat();//resposta do usuário
 
  
  Serial.println("Digite seu peso em quilogramas");//pergunta o peso em quilogramas do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  peso = Serial.parseFloat();//resposta do usuário
  
  //processamento
  IMC = peso / (altura * altura);
    
  //saída
  Serial.println("O seu nome eh: " + String (nome) );
  Serial.println("O seu IMC eh: " + String (IMC) );
  delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
}

