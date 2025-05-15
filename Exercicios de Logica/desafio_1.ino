// exibir do 5 ao 1 

//Variaveis
  int contador = 5;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  for (int contador =5; contador >= 1; contador--)
{
  Serial.println(String(contador));
}
 delay(4000); 
}


