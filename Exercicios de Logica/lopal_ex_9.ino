// C++ code
/*Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.*/

//Variáveis
String nome = "";
float salario = 0;
float novoSalario = 0;

void setup()
{
  Serial.begin (9600);
}

void loop()
{
  //Entrada 
  Serial.println("Qual eh o nome do funcionario?");//pergunta o nome do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  nome = Serial.readString();//resposta do usuário / ler um texto da serial
  nome.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Qual eh o salario de " + nome);//pergunta o salário do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  salario = Serial.parseFloat();//resposta do usuário
  
   //saída
  Serial.println("Relatorio");
  Serial.println();
  Serial.println("------------------------------------------------------------------------");
  Serial.println();
  Serial.println("Nome: " + nome);
  Serial.println("Salario: R$" + String (salario,2));
  
  if (salario <= 500)
  {
    novoSalario = salario + (salario * 0.30);
    Serial.println("Novo salario: R$" + String (novoSalario, 2) );
  } 
  else 
  {
    Serial.println("Infelizmente nao atende aos requisitos da empresa para receber o aumento");
  }
  Serial.println();
  Serial.println("------------------------------------------------------------------------");
  Serial.println();
    
  Serial.println();
  Serial.println();
  delay(5000);
}