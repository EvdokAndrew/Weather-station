#include <math.h>
int minute = 1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Minute\tTemberature");
}

void loop() {
  // put your main code here, to run repeatedly:
float v = analogRead(A0) * 5.0 / 1024.0;
float temberature = 14.46 * log(
  (10000.0 * v) / (5.0 - v) / 27074.0);
  Serial.print(minute);
  Serial.print("\t");
  Serial.println(temberature);
  delay(60000);
  ++minute;
}
