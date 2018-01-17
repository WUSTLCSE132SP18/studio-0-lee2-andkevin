int n = 0;

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  
  delay(1000);
  n += 1;
  Serial.print(n);
  Serial.println("sec have passed");
  
}
