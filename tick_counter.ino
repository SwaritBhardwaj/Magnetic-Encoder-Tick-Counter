int encoder_pin_A = 3;
int encoder_pin_B = 2;
float currentTime = 0; 
float previousTime = 0;
float rpm = 0;
volatile int pulse_count = 0 ;
int pulse_given = 340;
int count = 0;
int motorA = 9;
int motorB = 10;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
pinMode(motorA, OUTPUT); 
pinMode(motorA, OUTPUT); 
attachInterrupt(digitalPinToInterrupt(encoder_pin_A), StartInterruptA, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  while( digitalRead(encoder_pin_A) > 0) {
    count+=1;
    break;
  }
  Serial.println(pulse_count);
  /*analogWrite(motorA,255*6/11.5);
  digitalWrite(motorB,LOW);*/
}

void StartInterruptA(){
  
    pulse_count += 1;

}
