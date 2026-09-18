// 푸시버튼을 누르면 200ms 주기로 LED 점멸을 랜덤 반복 (함수유형2)

#define BUTTON 2
#define LED 6

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    int count = random(1, 10);	// count = 랜덤값 설정
    Serial.print("Blink count: ");
    Serial.println(count);
    blink(count);			// 함수 호출
  }
}

void blink(int cnt) {     		// 함수 유형2
  for (int i = 0; i < cnt; i++) {
    digitalWrite(LED, 1);
    delay(200);
    digitalWrite(LED, 0);
    delay(200);
  }
}