const int buzzerPin = 8;
const int buttonPin = 7;

void setup() {
  Serial.begin(9600);
  delay(100); // Bazı durumlarda gerekli
  Serial.println("GITHUB TEST");
  
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // Dahili pull-up direnci etkinleştirildi
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {  // Butona basıldığında LOW olur
    tone(buzzerPin, 1000);   // 1000 Hz frekansında ses
  } else {
    noTone(buzzerPin);
  }
}
