int airSensor = A0;
int led = D5;
int buzzer = D6;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int airValue = analogRead(airSensor);
  Serial.print("Air Quality Value: ");
  Serial.println(airValue);

  if (airValue > 500) {   // Threshold (adjust after calibration)
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(1000);
}
