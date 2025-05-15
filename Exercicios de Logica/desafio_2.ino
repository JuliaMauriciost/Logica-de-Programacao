// exibir do 0 ao 100 de 5 em 5

//Variaveis
  //int contador = 5;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  for (int contador =0; contador <=100; contador+=5)
{
  Serial.println(String(contador));
}
 delay(3000); 
}