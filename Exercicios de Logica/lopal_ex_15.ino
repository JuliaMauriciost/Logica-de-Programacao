// C++ code
/*Faça um programa que receba 4 notas de um aluno, calcule e imprima a média
aritmética das notas e a mensagem de APROVADO para média superior ou igual a
7,0 RECUPERAÇÃO para notas entre 5.0 e 7.0 ou a mensagem de REPROVADO
para média inferior a 5.0.*/

// Variáveis
float n1, n2, n3, n4, media;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a primeira nota:");
  while (!Serial.available());
  n1 = Serial.parseFloat();

  Serial.println("Digite a segunda nota:");
  while (!Serial.available());
  n2 = Serial.parseFloat();

  Serial.println("Digite a terceira nota:");
  while (!Serial.available());
  n3 = Serial.parseFloat();

  Serial.println("Digite a quarta nota:");
  while (!Serial.available());
  n4 = Serial.parseFloat();

  // Limpa o buffer do serial
  while (Serial.available()) Serial.read();

  // Processamento
  media = (n1 + n2 + n3 + n4) / 4;

  // Saída
  if (media >= 7)
  {
    Serial.println("APROVADO: A media foi de " + String(media));
  }
  else if (media >= 5 && media < 7)
  {
    Serial.println("RECUPERACAO: A media foi de " + String(media));
  }
  else
  {
    Serial.println("REPROVADO: A media foi de " + String(media));
  }

  // Aguarda um tempo antes de reiniciar
  delay(5000);
}
