// C++ code
//
int sensorState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  // read state of the sensor as digital input
  sensorState = digitalRead(2);
  // if sensor pin is HIGH. if it is, set the
  // LED on.
  if (sensorState == HIGH) {
    digitalWrite(13, HIGH);
    Serial.println("Sensor initialised!");
  } else {
    digitalWrite(13, LOW);
  }
  delay(10); // Delay to improve simulation performance
}