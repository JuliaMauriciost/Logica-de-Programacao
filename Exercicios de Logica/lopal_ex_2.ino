// Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. 
//Calcule e imprima a idade dessa pessoa 
//e converta essa idade em semana

//Variaveis
int idade = 0;
long idadeSem =0;
long anoNasc = 0;
long anoAtual = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Em que ano voce nasceu?");//pergunta para o usuario
  while(! Serial.available() ){}//Aguarda o usuario digitar (para loop)
  anoNasc = Serial.parseInt();
  
   Serial.println("Em que ano voce esta?");//pergunta para o usuario
  while(! Serial.available() ){}//Aguarda o usuario digitar (para loop)
  anoAtual = Serial.parseInt();
  
  //processamento
  idade = anoAtual - anoNasc;
  idadeSem = idade * 365 / 7;
  
  
  //saida
  Serial.println("Voce tem " + String(idade)  + " anos");
  Serial.println("Sua idade em semana:" +  String(idadeSem) );
  delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
}
  