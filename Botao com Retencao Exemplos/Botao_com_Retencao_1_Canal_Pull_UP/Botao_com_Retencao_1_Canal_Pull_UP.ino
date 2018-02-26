
 /* Muda o estado do canal com um
 pulso BAIXO ao SOLTAR o botão*/
 
 #define ch1 2
 #define botao1 8
 int leitura_ch1;
 int status_ch1 = 0;

 void setup() {
   pinMode(ch1, OUTPUT);
   pinMode(botao1, INPUT_PULLUP);
   digitalWrite(ch1, LOW);
   } 

 void loop() {
     Canal_01:
     leitura_ch1 = digitalRead(botao1);
     if (leitura_ch1 != 1)
     { while(digitalRead(botao1) != 1)
     delay(100);
     status_ch1 = !status_ch1;
     digitalWrite(ch1, status_ch1); }
     }
     
 
