#include <analogSensor.h>
/*
аналоговый порт - А0
Питание подаётся с порта 2
Земля подключена к порту 3
*/
analogSensor Sensor(A0, 2, 3);
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(Sensor.read());
  Serial.print("\t");
  Serial.println(Sensor.mapRead());
  delay(200);
}
