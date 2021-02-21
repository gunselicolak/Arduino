int seviye = A0,kirmizi=8,yesil=9, mavi=10;
void setup() {
  // put your setuöp code here, to run once:
  Serial.begin(9600);
  pinMode(kirmizi, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(mavi, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int seviye;
  seviye = analogRead(A0);
  Serial.println(seviye);

  if(seviye<=300)
  {
   digitalWrite(kirmizi, HIGH);
   digitalWrite(yesil, LOW);
   digitalWrite(mavi, LOW);
  }

  if(seviye > 300&&seviye<=500)
  {
   digitalWrite(kirmizi, HIGH);
   digitalWrite(yesil, HIGH);
   digitalWrite(mavi, LOW);
   }
   if(seviye>500)
   {
   digitalWrite(kirmizi, HIGH);
   digitalWrite(yesil, HIGH);
   digitalWrite(mavi, HIGH);
   }
   delay(100);
}
