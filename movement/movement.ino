void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9 , OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 delay(2000);
digitalWrite(8 , HIGH);
digitalWrite(11, HIGH);
delay(2000);
digitalWrite(8, LOW);
digitalWrite(11, LOW);
delay(200);
digitalWrite(11, HIGH);
digitalWrite(8, LOW);
delay (1000);
digitalWrite(8, HIGH);
digitalWrite(11, HIGH);
delay(2000);
digitalWrite(8, HIGH);
digitalWrite(10, HIGH);
delay(1000);
digitalWrite(8 , HIGH);
digitalWrite(11, HIGH);
delay(20000);
exit(0);
}
