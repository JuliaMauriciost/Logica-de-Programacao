// C++ code
//VARIÁVEIS

float dividir = 0;
float multiplicar = 0;
float subtrair;
float resultado;

int escolhaDaOperacao;
int contador =0;
  
float somar(float numero1, float numero2, int numero3 = 2){
	return (numero1 + numero2 + numero3 );
  	//numero3 é um parametro do somar 
    
}


void setup()
{
 Serial.begin(9600);
  
    float numero1 = 0;
    float numero2 = 0;
   

   do{
   Serial.println("Bem-vindo(a) a calculadora Inteligente ");
   Serial.println("Escolha uma das opcoes/operacoes:");
   Serial.println("1- Somar");
   Serial.println("2- Subtrair");
   Serial.println("3- Dividir");
   Serial.println("4- Multiplicar");

   while( ! Serial.available()){} 

   escolhaDaOperacao = Serial.parseInt();

   Serial.println("Agora, para realizar a operacao digite o primeiro numero:");
    while (! Serial.available()){}
   numero1 = Serial.parseFloat();

   Serial.println("Agora, para realizar a operacao digite o segundo numero:");
   while (! Serial.available());
   numero2 = Serial.parseFloat(); 
   
     switch(escolhaDaOperacao ){
       case 1:
       resultado= somar(numero1, numero2);
       Serial.println("WOW!! O resultado foi: " + String(resultado));

       break;

       case 2:
       subtrair = numero1 - numero2;
       Serial.println("WOW!! O resultado foi: " + String(resultado));

       break;

       case 3:
       dividir = (numero1 / numero2);
       Serial.println("WOW!! O resultado foi: " + String(resultado));

       break;

       case 4:
       multiplicar = numero1 * numero2;
       Serial.println("WOW!! O resultado foi: " + String(resultado));

       break;

       default:
       Serial.println("Opcao invalida");

     }
     Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(!Serial.available());
    
    if(Serial.readString() == "S")
    {
    	contador++;
    }
    else
    {
      	contador = 0;
    	Serial.println("Ate breve, obrigado por usar nossa calculadora inteligente!!! :)");
      	Serial.println("Caso queira voltar, reinicie o sistema.");
    }
    
   } 
  while(contador != 0);  
}

void loop(){

}
  