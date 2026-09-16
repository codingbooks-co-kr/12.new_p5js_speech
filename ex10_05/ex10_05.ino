// 푸시버튼을 누를 때마다 LED 한 번 토글

#define BUTTON 2
#define LED 6
boolean state = false;
int count = 0, preValue = 0;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);		// 푸시버튼값 읽기
  if (value == 0 && preValue == 1) {		// 푸시버튼을 누른 경우에만 참이 됨!
    state = !state;
    digitalWrite(LED, state);
    Serial.print("Count: ");
    Serial.println(count++);
  }
  preValue = value;		// 푸시버튼을 누르기 전 preValue=1, 누른 후 preValue=0
}