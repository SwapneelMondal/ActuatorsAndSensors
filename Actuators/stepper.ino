// Arduino sketch for Stepper
int step1 = 7;
int dir1 = 5;
int led = 13;


int input = 0;

void setup() {
  pinMode(step1, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led,HIGH);


  digitalWrite(dir1,HIGH);

  Serial.begin(9600);

  Serial.println("Enter no of steps: ");

}

void loop() {
  if(Serial.available()){
    input = Serial.parseInt();

    if(input>0){
      digitalWrite(dir1,HIGH);
      for(int i=0;i<input;i++){
            digitalWrite(step1,HIGH);
            delayMicroseconds(500);
            digitalWrite(step1,LOW);
            delayMicroseconds(500);
        
        
      }
    }else if(input<0){
       digitalWrite(dir1,LOW);
      for(int i=0;i<abs(input);i++){
      digitalWrite(step1,HIGH);
      delayMicroseconds(500);
      digitalWrite(step1,LOW);
      delayMicroseconds(500);
 
      }
    }
  }

}
