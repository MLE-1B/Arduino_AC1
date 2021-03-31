//variaveis da led
const int vermelho = 5;
const int verde = 6;
const int azul = 7;
bool estadoLedVermelho = false;

//acréscimo de um botão
const int botao1 = 2;
const int botao2 = 2;
unsigned long lastDebounceTime1 = 0;
unsigned long lastDebounceTime2 = 0;
const int botaoDelay = 100;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
//saída do led azul
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
   
  Serial.begin(9600);
//nome do nosso grupo
  Serial.println("AC1 - Meu Primeiro Projeto 2021");
  Serial.println("                           V1.0");
  Serial.println("Grupo:MLE");
}
//acender e apagar o led vermelho
void loop()
{
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao1)){
      Serial.println("botao 1 apertado");
    ledVermelho(true);
      lastDebounceTime1 = millis();
  }
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao2)){
      Serial.println("botao 2 apertado");
   ledVermelho(false);
      lastDebounceTime2 = millis();
  }
