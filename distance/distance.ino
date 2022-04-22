const int ledpinGreen = 10; // ledpin and soundpin are not changed throughout the process
const int ledpinBlue = 11;
const int ledpinRed = 12;
const int triggerPin = A0;
const int echoPin = A1;

int duration, distance;

void setup() {
  Serial.begin(9600);
  pinMode(ledpinBlue, OUTPUT);
  pinMode(ledpinGreen, OUTPUT);
  pinMode(ledpinRed, OUTPUT);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  int soundsens = analogRead(triggerPin); // reads analog data from sound sensor
  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  delay(300);

  Serial.print(distance);
  Serial.print('\n');
  
  if (distance < 10) {
    digitalWrite(ledpinBlue, HIGH); //turns led on
    delay(500);
    digitalWrite(ledpinBlue, LOW);
  } else if (distance >= 10 && distance <= 20) {
    digitalWrite(ledpinGreen, HIGH); //turns led on
    delay(500);
    digitalWrite(ledpinGreen, LOW);
  } else if (distance > 20) {
    digitalWrite(ledpinRed, HIGH); //turns led on
    delay(500);
    digitalWrite(ledpinRed, LOW);
  } else {
    digitalWrite(ledpinGreen, LOW);
    digitalWrite(ledpinRed, LOW);
    digitalWrite(ledpinBlue, LOW);
  }
}
