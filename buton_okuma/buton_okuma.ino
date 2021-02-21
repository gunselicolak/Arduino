double Buton
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Buton = digitgalRead(4);
  Serial.println(Buton);
 
  _delay(0.1);
  _loop();
  
 /* boolean basildi;
  digitalRead(4);
  if (basildi = true) {
    Serial.println("Butona basıldı");
  }
  else{
    Serial.println("Butona basılmadı");
    }
    delay(1000);
    */
    
   /* if (digitalRead(4) == 1){
      Serial.println("Basıldı");
    }
    else{
      Serial.println("Basılmadı");
    }
    */
    delay(1000);
}
