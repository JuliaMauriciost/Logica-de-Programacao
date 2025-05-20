// Variáveis Globais
String convidados[4];
int idadeConvidados[4]; // Camel Case
String emailConvidados[4];

void desenhaCabecalho()
{
  Serial.println("|---------------------------------------------|");
  Serial.println("|   *Ola, Senhoras e Senhores convidados*     |");
  Serial.println("|            Sejam bem-vindos(as)             |");
  Serial.println("|---------------------------------------------|");

  Serial.println(); // Pula linha
}

void setup() 
{
  Serial.begin(9600); // Inicia a comunicação serial
}
  void loop()
  {

    desenhaCabecalho();
    
    // Cadastrar os dados dos convidados
    for (int i = 0; i < 4; i++)
    {
      // Solicitar o nome do convidado
      Serial.println("Informe o nome do convidado " + String(i + 1) + ":");
      while (!Serial.available());
      convidados[i] = Serial.readString();

      // Solicitar a idade
      Serial.println("Informe a idade de " + convidados[i] + ":");
      while (!Serial.available());
      idadeConvidados[i] = Serial.parseInt();

      // Solicitar o email
      Serial.println("Informe o email de " + convidados[i] + ":");
      while (!Serial.available());
      emailConvidados[i] = Serial.readString();

      Serial.println();
    }

    // Exibir a lista de convidados maiores de idade
    Serial.println("|-------------------------------|");
    Serial.println("|    **LISTA DE CONVIDADOS**    |");
    Serial.println("|-------------------------------|");
    Serial.println();

    for (int i = 0; i < 4; i++) 
    {
      if (idadeConvidados[i] >= 18) 
      {
        Serial.println("Nome: " + convidados[i]);
        Serial.println("Idade: " + String(idadeConvidados[i])); 
        Serial.println("Email: " + emailConvidados[i]);
        Serial.println("------------------------------");
        Serial.println("Permissao para a festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade"));

        Serial.println("----------");
        Serial.println();
      }
      
      Serial.println(); 
      
    }//fim do dor
    
    delay(2000);
  }  


