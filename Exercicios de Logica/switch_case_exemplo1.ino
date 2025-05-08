/*
  1 = Melancia;
  2 = Banana;
  3 = Maca;
  4 = Morango;
  5 = Laranja;
  6 = Acerola.
*/

int fruta = 0; // Acerola

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha uma fruta sendo: 1 = Melancia; 2 = Banana; 3 = Maca; 4 = Morango; 5 = Laranja; 6 = Acerola.");
  while (!Serial.available());
  fruta = Serial.parseInt();
  
  switch(fruta)
  {
    case 1:
      Serial.println("Voce escolheu a fruta MELANCIA");
      break;
    case 2:
      Serial.println("Voce escolheu a fruta BANANA");
      break;
    case 3:
      Serial.println("Voce escolheu a fruta MACA");
      break;
    case 4:
      Serial.println("Voce escolheu a fruta MORANGO");
      break;
    case 5:
      Serial.println("Voce escolheu a fruta LARANJA");
      break;
    default:
      Serial.println("Nao temos a fruta escolhida");
      break;
  }
	Srial.println();
  delay(5000); // Espera 20 segundos antes de repetir
}