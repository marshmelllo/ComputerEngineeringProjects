 void setup(){
 Serial.begin(9600);
 tone(11,1000,300);
 pinMode(1,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(3,OUTPUT); 
 pinMode(4,INPUT);
 pinMode(5,INPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT); 
 pinMode(12,INPUT);
 pinMode(13,INPUT);
}

void loop(){
  
 if(digitalRead(12)==LOW && digitalRead(13)==LOW){
  motionForward();
 } 
 else{
  jump(); 
 }
 
}

void jump(){
  motionNone();
  liftDown();
  delay(1700);
  motionNone();
  motionForward();
while(true){
  tone(11,10,30);
  delay(30);
}  
}

void liftUp(){
  digitalWrite(6,LOW);
  digitalWrite(2,HIGH); 
 }
void liftDown(){
  Serial.println("down");
  digitalWrite(6,LOW);
  digitalWrite(2,HIGH);  
}
void motionBackward(){
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH); 
}
void motionForward(){
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
void motionRight(){
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);  
}
void motionLeft(){
   digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW); 
}
void motionNone(){
   digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW); 
  digitalWrite(1,LOW);
   digitalWrite(2,LOW); 
}
void rotateLeft(){
   digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH); 
}
void rotateRight(){
   digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW); 
}
