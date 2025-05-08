//Variaveis
float numero1 = 0.0;
float numero2 = 0.0;
float soma;
float subtracao = 0.0;
float multiplicacao = 0.0;
float divisao = 0.0;

int escolhaDaOperacao;
int contador = 0;

void setup()
{
  Serial.begin(9600);
  
  
   do{
  Serial.println("|-----------------------------------------------------------------|");
  Serial.println("|        Bem-vindo(a) a calculadora mega inteligente!!!:          |");
  Serial.println("|                Escolha uma das opcoes/operacoes:                |");
  Serial.println("|-----------------------------------------------------------------|");
                 
  Serial.println();//pula linha
                 
  Serial.println("1 - Somar");
  Serial.println("2 - Subtrair");
  Serial.println("3 - Multiplicar");
  Serial.println("4 - Dividir");
  
     while (! Serial.available()){}//Espera o usuario digitar
    
  escolhaDaOperacao = Serial.parseInt(); //Armazena o que o usuario digitou na variavel
  
  Serial.println("Agora, para realizar a operacao, digite o 1° numero:");
  while (! Serial.available()){}//Espera o usuario digitar
  numero1 = Serial.parseFloat();// PARSEFLOAT por que a variavel se localiza em float
  
  Serial.println("Agora, digite o 2° numero:");
  while (! Serial.available()){}//Espera o usuario digitar
  numero2 = Serial.parseFloat();
    
  switch(escolhaDaOperacao){
   case 1:
  soma = numero1 + numero2;
  Serial.println("WOW!!! O resultado eh: " + String(soma));
    
}  
  switch(escolhaDaOperacao){
   case 2:
  subtracao = numero1 - numero2;
  Serial.println("WOW!!! O resultado eh: " + String(subtracao));
}
     
  switch(escolhaDaOperacao){
    case 3:
  multiplicacao = numero1 * numero2;
  Serial.println("WOW!!! O resultado eh: " + String(multiplicacao));
}
    
  switch(escolhaDaOperacao){
    case 4:
  divisao = numero1 / numero2;
  Serial.println("WOW!!! O resultado eh: " + String(divisao));
}  

  Serial.println("Voce deseja continuar? Se sim, digites, se nao digite [n]");
  while(! Serial.available()){}//Espera o usuario digitar
     
  if(Serial.readString() == "s"){
    contador++;
}
  else{
    contador = 0;
       
  Serial.println("Ate breve, obrigada por usar a calculadora inteligente!");
  Serial.println("Caso queira voltar, reinicie o sistema.");
} 
  
   
  }
  while(contador != 0);
}



void loop()
{
  //sem codigo
   

}