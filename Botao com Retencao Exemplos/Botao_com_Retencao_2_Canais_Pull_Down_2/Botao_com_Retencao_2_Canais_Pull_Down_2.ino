
 /* Muda o estado dos canais com um
 pulso ALTO ao APERTAR o botão*/
 
 #define ch1 2
 #define ch2 3
 #define botao1 8
 #define botao2 9
 int estado_ch1 = 0;
 int estado_ch2 = 0;

 void setup() {
   pinMode(ch1, OUTPUT);
   pinMode(ch2, OUTPUT);
   pinMode(botao1, INPUT);
   pinMode(botao2, INPUT);
   digitalWrite(ch1, LOW);
   digitalWrite(ch2, LOW); } 

 void Canal1() {
     Canal_01:
  if(digitalRead(botao1)== 1 && estado_ch1 == 0)
  { digitalWrite(ch1,!digitalRead(ch1));
    delay(200);
    estado_ch1 = 1;}
  if(digitalRead(botao1) == 0 && estado_ch1 == 1)
  { delay(200);
    estado_ch1 = 0;}
  }
     
 void Canal2() {    
     Canal_02:
  if(digitalRead(botao2)== 1 && estado_ch2 == 0)
  { digitalWrite(ch2,!digitalRead(ch2));
    delay(200);
    estado_ch2 = 1;}
  if(digitalRead(botao2) == 0 && estado_ch2 == 1)
  { delay(200);
    estado_ch2 = 0;}
  }
   
 void loop() {
   Canal1();
   Canal2();
   }
