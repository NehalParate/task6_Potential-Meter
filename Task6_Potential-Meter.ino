#define pot A0 

void setup() {
  Serial.begin(9600); // baud rate
  pinMode(pot, INPUT);

}

void loop() {
 int x = analogRead(pot);
 Serial.print("POT Value = ");
 Serial.println(x);

}
