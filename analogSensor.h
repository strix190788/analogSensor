class analogSensor {
public:
  analogSensor(byte Sensorpin, byte pinV = 0, byte pinGND = 0) {
    _pin = Sensorpin;
    if (pinV != 0) {
      pinMode(pinV, OUTPUT);
      digitalWrite(pinV, 1);
    }
    if (pinGND != 0) {
      pinMode(pinGND, OUTPUT);
      digitalWrite(pinGND, 0);
    }
  }
  int read() {
	_value = analogRead(_pin);
    return _value;
  }
  
  int mapRead() {
    return map(analogRead(_pin), 0, 1023, 0, 100);
  }
  int mapRead(int minVal, int maxVal) {
    return map(analogRead(_pin), 0, 1023, minVal, maxVal);
  }
  
private:
  byte _pin;
  int _value;
  
};