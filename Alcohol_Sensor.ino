// Welcome to Aviyan's Thoughts

int AlcoholA0 = A1;
int LED = 24;
int SensorThres = 1000;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(AlcoholA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  int analogSensor = analogRead(AlcoholA0);
  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > SensorThres)
  {
        digitalWrite(LED, LOW);
        Serial.println("Alcohol Detected");
  }
  else
  {
    digitalWrite(LED, HIGH);
    Serial.println("Alcohol Not Detected");
  }
  delay(1000);

}
