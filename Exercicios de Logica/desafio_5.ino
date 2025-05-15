// C++ code
// Exibir os números pares de 60 a 80 e ímpares 
// de 81 a 101 no mesmo laco while
void setup()
{
  Serial.begin(9600);
}

void loop()
{
   int contador = 60;
   int contadorPar = 60;
   int contadorImpar = 81;
  
 /* while(contador >= 60 && contador <= 101)
  {
    
    if((contador % 2) != 1 && (contador >= 60 && contador <= 80))
    {
      Serial.println(String(contador));
    }
    
    if((contador % 2) != 0 && (contador >= 81 && contador <= 101))
    {
      Serial.println(String(contador));
    }
    contador++;
  }*/


while(contador <= 101)
  {
    Serial.print(contador);
 
    if(contador % 2 == 0)
    {
    Serial.println(" - Par");
    }
    else
    {
    Serial.println(" - Impar");
    }
    
    if(contador == 80)
    {
    contador -= 1;
    }
    contador += 2;
  }
  delay(4000);
}