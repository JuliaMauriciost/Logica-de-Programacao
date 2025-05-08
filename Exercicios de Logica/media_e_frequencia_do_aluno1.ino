//Calcule a média entre duas notas.Verifique se o aluno foi aprovado:Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
//Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
//Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!

//Variaveis
 string nome = "Julia" //tive dificuldade em desenvolver as variaveis e quais comando teria que colocar
 String sobrenome = "Maurcio"
 int NotaMat = 8;
 int NotaPort = 6;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //EntradA
  Serial.println("Qual seria o nome do aluno?");
  while (! println.available ())// espere o usuario digitar algo  e dar <Enter>
  Serial.println("Informe qual foi a sua nota de Matematica por favor");
  while (! println.available ())// espere o usuario digitar algo  e dar <Enter
  Serial.println("Agora digite a sua nota em Portugues por favor");// espere o usuario digitar algo  e dar <Enter
  
  
  if( NotaMat <7 = Reprovado);//tive muita dificuldade em saber quais comandos colocar no if e tambem como fazer eles acontecerem
    ( NotaPort >7 = Aprovado);//esqueci para que alguns comandos serviam
  Serial.println("")
  
    
}