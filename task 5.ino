long t=0;
long d=0;
#define trig 6
#define echo A0
void setup()
{
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT); 
 pinMode(2,OUTPUT);
 pinMode(trig,OUTPUT);
 pinMode(A0,INPUT);
  
}

void loop()
{
digitalWrite(trig, 0);
delayMicroseconds(2);
digitalWrite(trig, 1);
delayMicroseconds(10);
digitalWrite(trig, 0);
t = pulseIn(echo, 1);
d = (t/2) * 0.0343; 

  if(2<=d &&d<=50){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
}
 
  if(51<=d && d<=100){
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
}
 
   if(101<=d && d<=150){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,1);
}
 
   if(151<=d && d<=200){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
}
 
  if(200<=d){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
}
   
}
