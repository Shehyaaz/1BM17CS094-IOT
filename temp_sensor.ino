void setup(){
  Serial.begin(9600);
}

void loop(){
  int rawVoltage =  analogRead(A0);
  float milliVolt = (rawVoltage/1024.0)*5000; //1024.0 is important
  float celsuis = milliVolt/10;
  Serial.println("Celsius :");
  Serial.println(celsius);
  Serial.println("Fahrenheit :");
  Serial.println(celsius*9/5 + 32);
  delay(1000);
}
