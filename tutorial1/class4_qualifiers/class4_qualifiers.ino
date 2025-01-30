#define e 2.1817        // replaces values in compilation
const float pi = 3.14;  // Gets allocated in memory

float getCircleArea(float radius) {
  return pi * pow(radius, 2);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  float radius = 10;
  float circleArea = getCircleArea(radius);
  Serial.println("Circle area for a circle with radius " + String(radius) + " is " + String(circleArea) + " units ^ 2.");
}

void loop() {
  static int counter = 0;  // WIll not reset to 0 with each loop
  int limit = 5;
  while (counter <= limit) {
    Serial.println("Counter from loop " + String(counter) + ".");
    counter++;
  }
}
