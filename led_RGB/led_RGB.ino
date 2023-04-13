#define btA 5
#define btB 6
#define R 2
#define G 3
#define B 4

void setup(){
  pinMode(btA,INPUT);
  pinMode(btB,INPUT);
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
}
void loop(){
  if(((digitalRead(btA))==LOW) && ((digitalRead(btB))==LOW))
  {   
  digitalWrite(R,HIGH);//1
  delay(500);
  digitalWrite(R,LOW);
  delay(10);
 
  digitalWrite(G,HIGH);//2
  delay(500);
  digitalWrite(G,LOW);
  delay(10);
 
  digitalWrite(B,HIGH);//3
  delay(500);
  digitalWrite(B,LOW);
  delay(10);
 }
 if(((digitalRead(btA))==HIGH) && ((digitalRead(btB))==LOW))
 {
  delay(100);
  digitalWrite(R,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(B,LOW);
  }
  if(((digitalRead(btA))==LOW) && ((digitalRead(btB))==HIGH))
 {
  delay(100);
  digitalWrite(R,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(B,HIGH);
  }
  if(((digitalRead(btA))==HIGH) && ((digitalRead(btB))==HIGH))
 {
  delay(100);
  digitalWrite(R,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(B,HIGH);
  }
 
}
