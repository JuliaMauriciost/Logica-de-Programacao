int palpite = 0;
int palpites = 0;
/*
   Função para exibir um cabeçalho, pula uma linha e aguarda
   500 milisegundos a finalizar
*/
void desenhaCabecalho() 
{
  Serial.println("|---------------------------------------------|");   
  Serial.println("|   *Ola, Senhoras e Senhores convidados*     |");   
  Serial.println("|            Sejam bem-vindos(as)             |");  
  Serial.println("|---------------------------------------------|");   
  Serial.println(); // Pula linha
}

/*
desenha quantos pontinhos o usuário quiser
se o usuário não passar nada, desenha 5 pontinhos
*/ 
void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {    
    Serial.print(".");
    delay(500);
  }

}

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randômica para evitar pega o mesmo valor
}

void loop()
{
  desenhaCabecalho();// desenha o cabeçalho na tela
  
  //perguntar ao usuario quantas vezes ele quer jogar
  //criar os vetores baseados na quantidade de rodadas
  //jogar apenas essa quantidade (laco de repeticao)
  
  
  Serial.println("Quantas vezes voce quer jogar?");
  while(! Serial.available());
  int qtdRodadas = Serial.parseInt();//rodadas digitada pelo usuario
  
  //criar os arrays de estatisticas para o relatorio final
  int vetPalpite[qtdRodadas];//tamanho do vetor?? r: Depende de quants
  int vetResultados[qtdRodadas];//mesmo tamanho
  //Processo do jog
  for(int rod = 0; rod <= qtdRodadas; rod++)
  {//aqui dentro, o jogo todo!!!
  
  //solicita o palpite do usuário
  Serial.println("Digite seu palpite (1 a 6): ");
  while (!Serial.available());// espera o usuário digitar
  palpite = Serial.parseInt();// Aguarda o palpite do usuário

  //jogar o dado - sorteia um número randômico/aleatório de 1 até 7,ou seja,6
  int numeroSorteado = random(1, 7);//número entre 1 e 6
  Serial.println();
    
   //guardar os dados para estatisticas
    vetPalpite[rod] = palpite;
    vetResultados[rod] = numeroSorteado;
    Serial.println();

  
  Serial.print("Jogando o dado");
  
  desenhaPontinhos();

  Serial.println();

  //exibir o palpite do usuário
  Serial.println("Seu palpite foi: "+ String(palpite));
  Serial.println();


  //exibir o número sorteado]
  Serial.println("O numero sorteado foi: "+ String(numeroSorteado));

  if (palpite == numeroSorteado) 
  {
    Serial.println("Parabens! Voce acertou :) ");
  }
  else 
  {
    Serial.println("Que pena! Voce errou :( ");
    Serial.println();

  }    
    
  }//fim do for da rodada
  
  
  // ao finalizar, mostrar as estatisticas das jogadas - um relatorio
  Serial.println("ESTATISTICAS DO JOGO");
  for(int i = 0; i < qtdRodadas; i++)
  {
  Serial.println("Rodada " + String(i) + ":");
  Serial.println("   Palpite: " + String(vetPalpite[i]));
  Serial.println("   Resultado: " + String(vetResultados[i] == vetPalpite[i] ? "Acertou!" : "Errou!"));
  Serial.println("---------------------------------");
  Serial.println();
 }//fim do for que exibe o relatorio final (estatisticas)
  
  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!!");
  desenhaPontinhos(3, 500);
  delay(3000);//pausa de 3 segundos para reiniciar o loop
 
}
