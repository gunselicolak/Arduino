void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor = analogRead(A0);
  if(sensor<=800)
  {
    Serial.println("Sensor Degeri: ");
    Serial.println(sensor);
    Serial.print("");
    Serial.println("**Ates algilandi**");
  }
  else
  {
    Serial.println("Sensor Degeri");
    Serial.println(sensor);
    Serial.print(" ");
    Serial.println("Ates Yok");
  }
  delay(250);
}
