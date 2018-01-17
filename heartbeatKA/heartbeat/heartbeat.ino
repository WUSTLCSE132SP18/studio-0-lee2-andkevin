int n =0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
   delay(1000);
    n += 1;
    Serial.print(n);
    digitalWrite(13, HIGH);
    Serial.println(" sec have elapsed");  
    digitalWrite(13, LOW);
}
