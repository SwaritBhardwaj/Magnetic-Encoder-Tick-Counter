// TICK COUNTER CODE
// DECLARING THE PIN CONNECTIONS ON ARDUINO AND OTHER REQUIRED VARIABLES
int encoder_pin_A = 3;
int encoder_pin_B = 2;
int motorA = 9;
int motorB = 10;
float currentTime = 0; 
float previousTime = 0;
float rpm = 0;
volatile int pulse_count = 0 ;
int pulse_given = 340;
int count = 0;


void setup() {
Serial.begin(9600);   //INITIALIZING THE SERIAL MONITOR
pinMode(motorA, OUTPUT); 
pinMode(motorA, OUTPUT); 
attachInterrupt(digitalPinToInterrupt(encoder_pin_A), StartInterruptA, RISING);   // ATTACHING THE INTERRUPT TO ONE OF THE ENCODER PINS TO NEVER MISS A PULSE AND IF GOT A PULSE GOTO FUNCTION StartInterruptA() 
}

void loop() {
  // put your main code here, to run repeatedly:
  
 // MANUALLY ROTATE THE MOTOR SHAFT/ENCODER TO 360 DEGREES AND THE TOTAL TICKS WILL BE DISPLAYED ON THE SERIAL MONITOR 
  Serial.println(pulse_count);
 // CAN UNCOMMENT BELOW TO ROTATE MOTOR USING ARDUINO
  /*analogWrite(motorA,255*6/11.5);
  digitalWrite(motorB,LOW);*/
}

void StartInterruptA(){
  
    pulse_count += 1;

}
