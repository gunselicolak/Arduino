//SOL MOTOR
int in1 = 6, in2 = 7;
//SAĞ MOTOR 
int in3 = 8, in4 = 9;
//HCSRO4 MESAFE SENSÖRÜ
int trigPin = 4, echoPin = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  Serial.begin(9600);
}
void ileri()
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void saga()
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
  int sure,mesafe;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH);
  mesafe=(sure/2)/29.1;
  Serial.println(mesafe);
  if(mesafe<=30?)
  {
    saga();
  }
  else
  {
    ileri();
  }
}
