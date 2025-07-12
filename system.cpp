// Define the pin where the LED is connected
const int ledPin = 13; // On most Arduino boards, pin 13 has a built-in LED

// Setup function runs once when the system starts
void setup() {
    pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

// Loop function runs repeatedly
void loop() {
    digitalWrite(ledPin, HIGH); // Turn the LED on
    delay(1000);                // Wait for 1 second
    digitalWrite(ledPin, LOW);  // Turn the LED off
    delay(1000);                // Wait for 1 second
}
