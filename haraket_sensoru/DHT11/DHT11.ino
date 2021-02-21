#include <dht11.h>
dht11 DHT11;
void setup() {
  // put your setup code here, to run once:
  DHT11.attach(4);
  Serial.begin(9600);
  Serial.println("DHT11 TEST PROGRAM ");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHT11LIB_VERSION);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("\n");
  int chk = DHT11.read();
  Serial.println("READ sensor: ");
  switch (chk)
  {
    case 0:Serial.println("OK"); break;
    case -1:Serial.println("Checksum error"); break;
    case -2:Serial.println("Time out error"); break;
    default:Serial.println("Unknown error"); break;
  }
  Serial.print("Humidity (%): ");
 
  Serial.println((float)DHT11.humidity, DEC);
  Serial.print("Temperature (°C): ");
  Serial.println((float)DHT11.temperature, DEC);
  Serial.print("Temperature(°F): ");
  Serial.println(DHT11.fahrenheit(), DEC);
  Serial.print("Temperature (°K): ");
  Serial.println(DHT11.kelvin(), DEC);
  Serial.print("Dew Point(°C): ");
  Serial.println(DHT11.dewPoint(), DEC);
  Serial.print("Temperature (°C): ");
  Serial.println(DHT11.dewPointFast(), DEC);
  delay(2000);
  
}
