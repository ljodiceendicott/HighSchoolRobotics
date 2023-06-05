/*9 and 10 both make it go backward
8 and 11 both make it go forward*/

void setup() {           
pinMode(8, OUTPUT);
pinMode(9 , OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);

 }
 void loop(){
  delay(2000);
digitalWrite(8 , HIGH);
digitalWrite(11, HIGH);
delay(2000);
digitalWrite(11, HIGH);
digitalWrite(8, LOW);
delay (1000);
digitalWrite(8, HIGH);
digitalWrite(11, HIGH);
delay(2000);
digitalWrite(8, LOW);
digitalWrite(11, LOW);
digitalWrite(9, HIGH);
digitalWrite(10,HIGH);
delay(2000);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
delay(20000);
exit(0);

 }
