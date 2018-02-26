
/* Muda o estado do canal com um
 pulso ALTO ao APERTAR o botão*/
 
#define ch1 2
#define botao1 8
int estado_ch1 = 0;

void setup() {
  pinMode(ch1,OUTPUT);
  pinMode(botao1,INPUT);
  digitalWrite(ch1,LOW);
}

void loop() {
  Canal_01:
  if(digitalRead(botao1)== 1 && estado_ch1 == 0)
  { digitalWrite(ch1,!digitalRead(ch1));
    delay(200);
    estado_ch1 = 1;}
  if(digitalRead(botao1) == 0 && estado_ch1 == 1)
  { delay(200);
    estado_ch1 = 0;}
  }
