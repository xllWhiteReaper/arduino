byte byte1 = 255;
byte byte2 = 255;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  byte byte3 = byte1 + byte2;
  Serial.println("Byte1 + Byte2: " + String(byte3) + ".");
}

void loop() {
  // put your main code here, to run repeatedly:
}
