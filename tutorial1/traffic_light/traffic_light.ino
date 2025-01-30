#define redPin 8
#define yellowPin 7
#define greenPin 6
const int delayInMs = 1000;

int currentPin = greenPin;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  int cycleDuration = 25;
  int precautionTime = 3;
  int halfCycle = (int)((cycleDuration - precautionTime) / 2);
  // Turn off any turned on lights 
  digitalWrite(currentPin, LOW);
  // Will start with the green light
  currentPin = greenPin;
  digitalWrite(currentPin, HIGH);
  for(int i = 0; i < cycleDuration; i++){
    if(i == halfCycle){
      digitalWrite(currentPin, LOW);
      currentPin = yellowPin;
      digitalWrite(currentPin, HIGH);
    }
    else if(i == halfCycle + precautionTime){
      digitalWrite(currentPin, LOW);
      currentPin = redPin;
      digitalWrite(currentPin, HIGH);
    }
    delay(delayInMs);
  }
}
