
#define led 4
#define button 6

void setup() {
pinMode(button,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
readValue=digitalRead(button);
if(readValue==1){
  digitalWrite(led,HIGH);
}
else{
  digitalWrite(led,LOW);
}

}
