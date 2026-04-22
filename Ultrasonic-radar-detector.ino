//Ultrasonic Radar Detector Project
//Ali Arda Kocabörek | Akdeniz EEE

#include <Servo.h>
#include <Arduino.h>

const int trigPin = 9;
const int echoPin = 10;  
const int buzzerPin = 12;


Servo radarServo; //Bu bizim motoruma verdigimiz adlandirma

void checkDistance();

int main(void){
	
	init();
    
  radarServo.attach(11);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  
  
  Serial.begin(9600);
  
  while(1)
  {
  	
  	 for(int i = 0; i <= 180; i++){  
    radarServo.write(i);
    delay(30); 
    
    checkDistance();
    
  }
     for(int i = 180; i >= 0; i--){  
    radarServo.write(i);
    delay(30);
    
    checkDistance();
  }
}
  	
  	
}

void checkDistance() {
	
	  long duration; //sesin hava kalma suresi
    int distance; //sesin esyaya carpana kadar gidip gelme toplam suresi 
	
	
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;  //0.034 sesin havadaki hızı (cm/mikrosaniye) | 2'ye bolmemizin sebebi ise sesin gidip aynı yolu geri donmesi boylelikle engele olan mesafeyi buluyoruz

  if (distance > 0 && distance <= 20) { 
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
}
