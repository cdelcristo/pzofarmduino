
//
//    FILE: poZFarm.ino
//  AUTHOR: Carlos Delcristo
// VERSION: 0.0.01
// PURPOSE: Humidity and Temperature data log
//     URL:
//
// Released to the public domain
//

#include <dht.h>

dht DHT;

#define DHT11_PIN 5

void setup()
{
  Serial.begin(9600); // Set communication to 9600 bauds
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  // DISPLAY DATA
  Serial.print(DHT.humidity, 1);
  Serial.print("\t");
  Serial.println(DHT.temperature, 1);
  delay(30000);
}
//
// END OF FILE
//
