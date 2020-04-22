
void setup() {
pinMode(9,OUTPUT);
pinMode(52,OUTPUT);
pinMode(12,OUTPUT);
pinMode(A1,INPUT);
}

void loop() {
  int statsSensor = digitalRead(A1);
  if(statsSensor == 0){
    analogWrite(12,255);
        analogWrite(9,0);
        digitalWrite(52,HIGH);
        for(int a=0; a<=55;a++){
         analogWrite(12,a);
         delay(30);
        }
        for(int a=55; a>=0;a--){
         analogWrite(12,a);
         delay(30);
        }
  } else {
   //     analogWrite(12,0);
        analogWrite(9,0);
        digitalWrite(52,LOW);
  }
  

}
