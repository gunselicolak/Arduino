//int trigPin = 6;
//int echoPin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,OUTPUT);//trigPin
  pinMode(7,INPUT);//echoPin
  pinMode(4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sure,mesafe;
  digitalWrite(6,LOW);
  delayMicroseconds(2);
  digitalWrite(6,OUTPUT);
  delayMicroseconds(10);
  digitalWrite(6,LOW);
  sure=pulseIn(7,HIGH);
  mesafe=(sure/2)/29.1;
  if(mesafe>=200||mesafe<=0){
    Serial.println("Menzil Dİsi");
    digitalWrite(4, LOW);
  }
  else{
    digitalWrite(4, HIGH);
    Serial.println(mesafe);
    Serial.println("cm");
  }
  delay(250);
}
