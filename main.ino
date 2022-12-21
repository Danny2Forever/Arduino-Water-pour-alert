void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(500);

  if(sensorValue <= 800){
    digitalWrite(13, LOW);

  }
  else if(sensorValue > 1000){
    digitalWrite(13, HIGH);
    Serial.println("You need pour water");
  }
}
