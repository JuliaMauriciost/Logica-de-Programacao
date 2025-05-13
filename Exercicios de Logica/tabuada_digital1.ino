// Elaborar uma tabuada 

//Variavel
int tabuadaEscolhida;
int resultado;
  
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 
 Serial.println("Seja bem-vindo(a)a tabuada digital! :");
 Serial.println("Informe qual tabuada voce deseja ver: ");
 while (! Serial.available());//Espera o usuario dar <Enter>
 tabuadaEscolhida = Serial.parseInt();
    
 for(int contador = 1; contador <= 10; contador++){
  resultado = tabuadaEscolhida * contador;
   
 //Exibir assim: 2 x 1 = 20
 Serial.print(String(tabuadaEscolhida) + " x " + String(contador) + " = " + String(resultado));
    
 Serial.println();//pula linha
   
}
        
  delay(3000);
}
