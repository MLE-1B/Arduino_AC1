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
