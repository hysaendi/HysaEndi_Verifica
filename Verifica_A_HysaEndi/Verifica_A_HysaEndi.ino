
int rosso;      //dichiarazione variabili
int giallo;
int bianco;
int verde;
int temporossogiallo;
int tempobiancoverde;




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

  void richieditempoRossoGiallo ()
  {
    Serial.println ("Quanto deve durare il rosso e il giallo? (input in ms)");
    while (Serial.available() == 0) {};
    String input = Serial.readString ();
    temporossogiallo = input.toInt();
    
  }

  void richiediempobiancoverde()
  {
    Serial.println ("Quanto deve durare il bianco e il verde? (input in ms)");
    while (Serial.available() == 0) {};
    String input = Serial.readString ();
    tempobiancoverde= input.toInt();
  }

