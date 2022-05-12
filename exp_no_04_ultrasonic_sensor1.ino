#define echoPin 9
#define trigPin 10


long duration;
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
26
  Serial.print("Distance");
27
  Serial.print(distance);
28
  Serial.println("cm");
29
}

  digitalWrite(trigPin, LOW);
  
  duration=pulseIn(echoPin, HIGH);
  
  distance=duration*0.034/2;
  
  Serial.print("Distance");
  Serial.print(distance);
  Serial.println("cm");
}