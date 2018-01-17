int n=0;

void setup() {
   Serial.begin(9600);
}
void loop() {
  n=n+1;
  delay(700);
  Serial.print(n);
  Serial.print(" Thump ... ");
  delay(299);
  Serial.println(" thump");

}
