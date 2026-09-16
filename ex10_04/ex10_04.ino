// 푸시버튼을 누르고 있는 동안 LED 토글

#define BUTTON 2				// 상수
#define LED 6					// 상수
boolean state = false;				// 전역변수
int count = 0;					// 전역변수

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);		// 지역변수 선언, 푸시버튼값 읽기
  if (value == 0) {
    state = !state;				// 토글: true → false → true ...
    digitalWrite(LED, state);
    Serial.print("Count: ");
    Serial.println(count++);
  }
  delay(200);
}