#include <SoftwareSerial.h>

int blueTx=8;
int blueRx=5;
SoftwareSerial myserial(blueTx, blueRx);

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
}
void loop()
{
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
