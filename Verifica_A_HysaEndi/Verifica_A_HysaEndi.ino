
int rosso;      //dichiarazione variabili
int giallo;
int bianco;
int verde;
int temporossogiallo;
int tempobiancoverde;
int richiesta;  //variabile con la quale posso chiedere i valori




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

  richiesta = 0;

}

void loop() {
  // put your main code here, to run repeatedly:
    if (richiesta == 0)   //parte richiesta valori
    {
      richiediTempi();
      richiesta = 1; //richiesta = 1 cosi non chiederà sempre quanto durano i valori
    }

   
    alternanzaLed ();


    
}

    void richiediTempi()   //metodo con la quale richiamo i metodi di richiesta
    {
      richieditempoRossoGiallo ();
      richiediempobiancoverde();
      
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


  void alternanzaLed ()
  {
     digitalWrite (rosso,HIGH);
    digitalWrite (giallo,HIGH);
    delay (temporossogiallo);
    digitalWrite (rosso,LOW);
    digitalWrite (giallo,LOW);
    digitalWrite (bianco, HIGH);
    digitalWrite (verde,HIGH);
    delay (tempobiancoverde);
    digitalWrite (bianco,LOW);
    digitalWrite (verde,LOW);
  }

