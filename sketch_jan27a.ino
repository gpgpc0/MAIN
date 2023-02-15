void setup() {
  Serial.begin(9800);
  pinMode(5, OUTPUT);//R
  pinMode(6, OUTPUT);//G
  pinMode(10, OUTPUT);//B
  pinMode(0,INPUT);//2
  pinMode(1,INPUT);//1
  pinMode(A0,INPUT);
}

void loop() {
  int banana=analogRead(A0),PIN=5,BAAA=digitalRead(0);//VR1=A0
  //banana=banana*1000;
  if (BAAA==0)
  {
  digitalWrite(5, HIGH);
  delay(banana);
  digitalWrite(5, LOW);
  //delay(banana);
  digitalWrite(6, HIGH);
  delay(banana);
  digitalWrite(6, LOW);
  //delay(banana);
  digitalWrite(10, HIGH);
  delay(banana);
  digitalWrite(10, LOW);
  //delay(banana);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(banana);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  //delay(banana);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(banana);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  //delay(banana);
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(banana);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  //delay(banana);
  digitalWrite(10, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(banana);
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  //delay(banana);
  }
  

  Serial.println("");
  //pin:0 switch2 pin:1 switch1 pin3:buzer pin:5 RED pin:6 GREEN pin:10 BLUE
}
