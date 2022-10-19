//https://wokwi.com/projects/345986040835605076
#define LED 3
#define POT A0

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);

  Serial.begin(9600);

  //digitalWrite(LED, HIGH);
}

void loop() {
  Serial.println(analogRead(POT));
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  delay(analogRead(POT));
  digitalWrite(3, LOW);
  delay(analogRead(POT));
}
