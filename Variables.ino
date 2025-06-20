//Morse code SOS program 

int pinnumber=10;
float pi=3.14;
int delay1=250;
int delay2=700; 
int longwait=2000; 



void setup() {
  // put your setup code here, to run once:
  pinMode(pinnumber,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinnumber,HIGH);
  delay(delay1);
  digitalWrite(pinnumber,LOW);
  delay(delay1);

  digitalWrite(pinnumber,HIGH);
  delay(delay1);
  digitalWrite(pinnumber,LOW);
  delay(delay1);

  digitalWrite(pinnumber,HIGH);
  delay(delay1);
  digitalWrite(pinnumber,LOW);
  delay(delay1);

  digitalWrite(pinnumber,HIGH);
  delay(delay2);
  digitalWrite(pinnumber,LOW);
  delay(delay2);

   digitalWrite(pinnumber,HIGH);
  delay(delay2);
  digitalWrite(pinnumber,LOW);
  delay(delay2); 

  digitalWrite(pinnumber,HIGH);
  delay(delay2);
  digitalWrite(pinnumber,LOW);
  delay(delay2);

   digitalWrite(pinnumber,HIGH);
  delay(delay1);
  digitalWrite(pinnumber,LOW);
  delay(delay1);

  digitalWrite(pinnumber,HIGH);
  delay(delay1);
  digitalWrite(pinnumber,LOW);
  delay(delay1);

  digitalWrite(pinnumber,HIGH);
  delay(delay1);
  digitalWrite(pinnumber,LOW);
  delay(delay1);

  delay(longwait);
}
