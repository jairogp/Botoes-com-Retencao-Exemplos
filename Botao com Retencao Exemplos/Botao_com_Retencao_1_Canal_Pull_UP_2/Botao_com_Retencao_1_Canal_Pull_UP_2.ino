
/* Muda o estado do canal com um
 pulso BAIXO ao APERTAR o botão*/
 
#define ch1 2
#define botao1 8
int estado_ch1 = 0;

void setup() {
  pinMode(botao1,INPUT_PULLUP);
  pinMode(ch1,OUTPUT);
  digitalWrite(ch1,LOW);
  }

void loop() {
  if(digitalRead(botao1)== 0 && estado_ch1 == 0)
  { digitalWrite(ch1,!digitalRead(ch1));
    delay(200);
    estado_ch1 = 1;}
  if(digitalRead(botao1) == 1 && estado_ch1 == 1)
  { delay(200);
    estado_ch1 = 0;}
  }
