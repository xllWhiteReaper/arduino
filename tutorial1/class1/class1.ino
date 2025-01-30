int pinToLight = 13;
int timeDelayInMS = 1200;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinToLight, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinToLight, HIGH);
  delay(timeDelayInMS);
  digitalWrite(pinToLight, LOW);
  delay(timeDelayInMS);
}
