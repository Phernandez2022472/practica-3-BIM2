#define TRAN 2
#define RELE 3
#define AZUL 4

void setup() {
  pinMode(TRAN,INPUT);
  pinMode(RELE,OUTPUT);
  pinMode(AZUL,OUTPUT);

}

void loop() {
bool SENSOR=digitalRead(TRAN);
if(SENSOR==LOW){
  digitalWrite(RELE,LOW);
  digitalWrite(AZUL,HIGH);
  }
 if(SENSOR==HIGH){
  digitalWrite(RELE,HIGH);
  digitalWrite(AZUL,LOW);
 }
}
