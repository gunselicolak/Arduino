void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//bit (boyutunu) belirler // balttır frekansı belirler 
  pinMode(7,INPUT);// tanımlama
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Bilgisayar");// ekrana yazdırır
  //delay(2000);// zamanı
  boolean hareketvar;//evet varsa yapar 0 1
  hareketvar=digitalRead(7);
  Serial.println(hareketvar);// değişken yazdırmak istediğimiz zaman tırnak koymayız
  while(1);
}
