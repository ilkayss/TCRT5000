int redLed=3;
int greenLed =2;

int TCRT5000 =8;



void setup() {
  Serial.begin(9600);
  pinMode(greenLed,OUTPUT);
  pinMode(redLed,OUTPUT);
  pinMode(TCRT5000, INPUT);
}

void loop() {
  int dijital = digitalRead(TCRT5000);
  int analog = analogRead(A0);


  Serial.print(analog);


  if(dijital == HIGH){
    digitalWrite(greenLed,1);
    digitalWrite(redLed,0);
    delay(100);
  }else{
    digitalWrite(greenLed,0);
    digitalWrite(redLed,1);
    delay(100);
  }
}
