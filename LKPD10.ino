//salman maulana
//XI TAV 2
const int buttonPin = 26;
void setup(){
    pinMode(buttonPin, INPUT);
    Serial.begin(9600);
}
void loop() {
    int buttonState =digitalRead(buttonPin);
    Serial.print("TOMBOL ditekan: ");
    if (buttonState == HIGH) {
        Serial.println("Ya");
    } else {
        Serial.println("TIDAK");
    delay(100);
}
}