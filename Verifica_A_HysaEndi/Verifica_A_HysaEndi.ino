
int rosso;      //dichiarazione variabili
int giallo;
int bianco;
int verde;




void setup() {
  // put your setup code here, to run once:
  rosso = 12;
  giallo = 6;
  bianco = 8;
  verde = 10;


  pinMode (rosso,OUTPUT);
  pinMode (giallo,OUTPUT);
  pinMode (bianco,OUTPUT);
  pinMode (verde,OUTPUT);

  Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:

}
