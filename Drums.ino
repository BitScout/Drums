
#define LED1 0
#define LED2 4

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {

  delay(350);

  beat(LED1);
  beat(LED2);
  beat(LED1);
  beat(LED2);
}

void beat(int led) {
  int fadeDelay = 1;
  int fadeStep = 4;
  
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += fadeStep) {
    analogWrite(led, fadeValue);
    delay(fadeDelay);
  }
  
  delay(random(60,70));
  
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= fadeStep) {
    analogWrite(led, fadeValue);
    delay(fadeDelay);
  }
}

