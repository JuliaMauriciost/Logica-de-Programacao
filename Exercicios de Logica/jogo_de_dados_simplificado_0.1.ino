// C++ code
//
/*funcao que desenha o cabecalho, pula uma linha e aguarda 500 milissegundos a finalizar*/
  
int palpite = 0;


void desenhaCabecalho()
{
    Serial.println("|--------------------------------|");
    Serial.println("|                                |");
    Serial.println("|     Sejam bem-vindos(a)ao      |");
    Serial.println("|     PROGRAMA JOGO DE DADOS     |");
    Serial.println("|                                |");
    Serial.println("|--------------------------------|");

    Serial.println();
    delay(600);
}
/*
    Desenha quantos pontinhos o usuario 
    quiser se o usuario nao passar, desenha 5 pontonhos 
    o tempo tambem e opcional, caso nao passar assune 700 milessegundos
*/
/*void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
}*/

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randomica para evitar pega o mesmo valor
}


   
void loop()
{
  desenhaCabecalho();//desenha o cabecalho na tela
  
  //solicitar o palpite do usuario - 3 comandos
  Serial.println("Digite seu palpite entre 1 e 6: ");
  while (!Serial.available());//espera o usuario
  int palpite = Serial.parseInt();//guarda o palpite do usuario
  
  //jogar o dado - sorteia um numero randomico/aleatorios de 1 ate 7 - 1, ou seja, 6
  int numeroSorteado = random(1, 7);//numero entre 1 e 6
  Serial.println();
  
  
  Serial.println("Seu palpite foi: " + String(palpite));//exibir o palpite
  Serial.println();

  Serial.println("Jogando o dado.....");
  Serial.println();
  delay(2000);

  Serial.println("Numero sorteado: " + String(numeroSorteado));//exibir o numero sorteado
  Serial.println();


    
  //valida o resultado
  if(palpite == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou!!");
  }else{
   Serial.println("Que pena, tente outra vez!!");
  }
  
  Serial.println("Reiniciando o programa");
  Serial.println();
  
  delay(7000);
  
  
}