int pinToLight = 13;
int timeDelayInMS = 1200;
int currentIteration = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinToLight, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinToLight, HIGH);
  currentIteration++;
  delay(timeDelayInMS);
  Serial.println("Current loop iteration: " + String(currentIteration) + ".");
  digitalWrite(pinToLight, LOW);
  delay(timeDelayInMS);
}
