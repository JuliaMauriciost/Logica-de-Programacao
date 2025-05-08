// C++ code
/*Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.*/
//Variáveis
int numero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero qualquer");  
  while (! Serial.available());
  numero = Serial.parseInt();
  
  if(numero % 2 == 0)
  {
  Serial.println("O numero digitado eh par: ");
  Serial.println(numero);
  }
  else 
  {
  Serial.println("O numero digitado nao pode ser classificado como par: ");
  Serial.println(numero);
  }
  Serial.println();
  delay(3000);
}