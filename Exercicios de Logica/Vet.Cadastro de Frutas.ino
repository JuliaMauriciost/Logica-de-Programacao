// C++ code
//Varíaveis Globais
//Vetor tamanho 6: vai de 0 ate 5
String frutas[6];
float precoFrutas[6];
void setup()
{
  Serial.begin(9600);
  
  Serial.println("|-----------------------------------|");
  Serial.println("|      *** SACOLAO DO ZEH ***       |");
  Serial.println("|-----------------------------------|");
  
  
  
  Serial.println("Oh ZEH, bora cadastrar as frutas!");
  
  Serial.println();
  //Pede as frutas para o usuario
  for(int i = 0; i <= 5; i++){
    //Pega a fruta do usuario
   Serial.println("Informe a "+ String(i + 1)+ "a Fruta:");
   while (! Serial.available());//espere o usuario dar <Enter>
   String frutaDigitada = Serial.readString();
    
  //pega o preco da fruta 
  Serial.println("Qual o preco de "+ frutaDigitada+ "?");
  while (! Serial.available());//espere o usuario dar <Enter>
  float precoDigitado = Serial.parseFloat();
    
   //poe a fruta na escola / cadastra a fruta no array/vetor
  frutas[i] = frutaDigitada;
  precoFrutas [i] = precoDigitado;
    
}//fim do for
  
  
  Serial.println("Exibindo os valores cadastrados: ");
  Serial.println();
  
  for(int i = 0; i <= 5; i++)
  {
   Serial.println(String(i + 1) + "a Fruta:" + frutas[i]);
   Serial.println("Preco da Fruta: " + String(precoFrutas[i]));
  }
 
}//fim do setup

void loop()
{
  
}