void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensordegeri= analogRead(A1);
  Serial.println(sensordegeri);
  delay(100);
6+5
  if(sensordegeri >= 600)
  digitalWrite(6,HIGH);
  else
  digitalWrite(6,LOW);
}
