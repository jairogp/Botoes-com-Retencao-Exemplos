
 /* Muda o estado dos canais com um
 pulso ALTO ao SOLTAR o botão*/
 
 #define ch1 2
 #define ch2 3
 #define botao1 8
 #define botao2 9
 int leitura_ch1;
 int leitura_ch2;
 int status_ch1 = 0;
 int status_ch2 = 0;

 void setup() {
   pinMode(ch1, OUTPUT);
   pinMode(ch2, OUTPUT);
   pinMode(botao1, INPUT);
   pinMode(botao2, INPUT);
   digitalWrite(ch1, LOW);
   digitalWrite(ch2, LOW);
 } 

 void loop() {
     Canal_01:
     leitura_ch1 = digitalRead(botao1);
     if (leitura_ch1 != 0)
     { while(digitalRead(botao1) != 0)
     delay(100);
     status_ch1 = !status_ch1;
     digitalWrite(ch1, status_ch1); }
     
     Canal_02:
     leitura_ch2 = digitalRead(botao2);
     if (leitura_ch2 != 0)
     { while(digitalRead(botao2) != 0)
     delay(100);
     status_ch2 = !status_ch2;
     digitalWrite(ch2, status_ch2); }
 }
