// C++ code
//É uma estrutura de repetição que só executa o laço enquanto a condição for verdadeira.

int numero1 = 0;
void setup()
{
  	Serial.begin(9600);
}

void loop()
{
  int contadorWhile = 5;
  int contador = 1;
  
  while(contadorWhile >= 0)
  {
  	Serial.println("Contando: " + String(contadorWhile));
    contadorWhile--;//contadorWhile = contadorWhile + 1
  }
  while(contador <= 5)
  {
  	Serial.println("Contando: " + String(contador));
    contador++;//contadorWhile = contadorWhile + 1
  }
  Serial.println();
  delay(3000);
}
