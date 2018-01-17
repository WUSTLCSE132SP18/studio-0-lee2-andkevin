int n =0;

void setup(){
  Serial.begin(9600);
}

void loop(){
 double t = millis()/1000.0;
 Serial.print(t);
 Serial.println(" millisecs passed.");
 n=n+1;
 delay(1000);
 Serial.print(n);
 Serial.println(" heartbeats.");
}

