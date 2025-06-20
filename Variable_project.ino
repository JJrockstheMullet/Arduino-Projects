int pingreen=10;
int pinred=2;
int pinyellow=4;
int blinkgreen=100;
int blinkred=400;
int blinkyellow=1600;


void setup() {
  // put your setup code here, to run once:
  pinMode(pingreen,OUTPUT);
  pinMode(pinred,OUTPUT);
  pinMode(pinyellow,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pingreen,HIGH);
  delay(blinkgreen);
  digitalWrite(pingreen,LOW);
  delay(blinkgreen);

  digitalWrite(pingreen,HIGH);
  delay(blinkgreen);
  digitalWrite(pingreen,LOW);
  delay(blinkgreen);

  digitalWrite(pingreen,HIGH);
  delay(blinkgreen);
  digitalWrite(pingreen,LOW);
  delay(blinkgreen);

  digitalWrite(pingreen,HIGH);
  delay(blinkgreen);
  digitalWrite(pingreen,LOW);
  delay(blinkgreen);

  //RED 

  digitalWrite(pinred,HIGH);
  delay(blinkred);
  digitalWrite(pinred,LOW);
  delay(blinkred);

  digitalWrite(pinred,HIGH);
  delay(blinkred);
  digitalWrite(pinred,LOW);
  delay(blinkred);

  digitalWrite(pinred,HIGH);
  delay(blinkred);
  digitalWrite(pinred,LOW);
  delay(blinkred);

  digitalWrite(pinred,HIGH);
  delay(blinkred);
  digitalWrite(pinred,LOW);
  delay(blinkred);

  //YELLOW

  digitalWrite(pinyellow,HIGH);
  delay(blinkyellow);
  digitalWrite(pinyellow,LOW);
  delay(blinkyellow);

    digitalWrite(pinyellow,HIGH);
  delay(blinkyellow);
  digitalWrite(pinyellow,LOW);
  delay(blinkyellow);

    digitalWrite(pinyellow,HIGH);
  delay(blinkyellow);
  digitalWrite(pinyellow,LOW);
  delay(blinkyellow);

    digitalWrite(pinyellow,HIGH);
  delay(blinkyellow);
  digitalWrite(pinyellow,LOW);
  delay(blinkyellow);

  

}
