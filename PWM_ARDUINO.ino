void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<256;i++){
  int j=map(i,0,255,0,5);
  analogWrite(8,i);
  Serial.print("Value of i:");
  Serial.print(i);
  Serial.print("             Value of i in Volts : ");
  Serial.println(j);
}
}
