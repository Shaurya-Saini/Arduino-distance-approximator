int ultrasonic = 12;
int red = 2;
int blue = 4;
int green = 6;

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  
  //Serial.begin(9600);
}

void loop()
{
  int duration,cm;
  
  //Sending ultrasonic waves 
  pinMode(ultrasonic,OUTPUT);
  digitalWrite(ultrasonic,LOW);
  delayMicroseconds(2);
  digitalWrite(ultrasonic,HIGH);
  delayMicroseconds(5);
  digitalWrite(ultrasonic,LOW);
  
  //Reciving ultrasonic waves
  pinMode(ultrasonic,INPUT);
  duration = pulseIn(ultrasonic , HIGH);
  
  //calculating the distance
  //Waves take 29 microseconds to travel per cm
  cm=duration/29;
  cm/=2;
  
  //stuff
  if (cm>=5 && cm<50){
  	digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);
  }
  
  else if (cm>=50 && cm<100){
    digitalWrite(red,LOW);
    digitalWrite(blue,HIGH);
    digitalWrite(green,LOW);
  }
  
  else if (cm>=100 && cm<150){
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    digitalWrite(green,HIGH);
  }
  else{
  	digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);
  }
  
  //Serial.print(cm);
  
  delay(100);
}