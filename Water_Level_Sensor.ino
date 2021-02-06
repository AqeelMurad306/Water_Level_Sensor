int waterlevel = 0;
int sensorpin = A5;
int led_red = 2;

void setup() {
  Serial.begin(9600);

  pinMode(led_red, OUTPUT);
}

void loop() {

  waterlevel = analogRead(sensorpin);

  Serial.println("Water Level: ");

  if (waterlevel <= 100){
    Serial.println("Empty");
  }
  else if (waterlevel > 100 && waterlevel <= 300){
    Serial.println("Low");
  }
  else if (waterlevel > 300 && waterlevel <= 330){
    Serial.println("Medium");
  }
  else if (waterlevel > 330){
    Serial.println("High");
    digitalWrite(led_red, HIGH);
  }

  digitalWrite(led_red, LOW);

}
