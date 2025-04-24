//Faça um programa que receba o nome, cargo, e salário de um funcionário. Calcule o
//salário a ser acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

//Variáveis
String nome = "";
String cargo = "";
float salarioInicial = 0;
float salarioAcrescido = 0;

void setup()
{
  Serial.begin (9600);
}

void loop()
{
  //Entrada 
  Serial.println("Digite seu nome");//pergunta o nome do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  nome = Serial.readString();//resposta do usuário / ler um texto da serial
  nome.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite seu cargo");//pergunta o cargo do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  cargo = Serial.readString();//resposta do usuário / ler um texto da serial
  cargo.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite seu salario");//pergunta o salário do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  salarioInicial = Serial.parseFloat();//resposta do usuário
  
  //processamento
  salarioAcrescido = salarioInicial + (salarioInicial * 0.10);
  
  //saída
  Serial.println("O seu nome eh: " + String (nome) );
  Serial.println("O seu salario acrescido eh: " + String (salarioAcrescido) );
  delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
}