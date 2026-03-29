#include <analogSensor.h>
/*
аналоговый порт - А0
Питание подаётся с порта 2
Земля подключена к порту 3
*/
analogSensor leftSensor(A0, 2, 3);
analogSensor rightSensor(A1, 4, 5);
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(leftSensor.mapRead());
  Serial.print("\t");
  Serial.println(rightSensor.mapRead());
  delay(200);
}
