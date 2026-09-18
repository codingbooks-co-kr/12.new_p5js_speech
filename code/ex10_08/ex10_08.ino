// analogWrite() 함수를 사용한 LED 밝기 조절

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int i = 0; i < 256; i++) {	// LED 밝아짐 (반복 총 시간: 256*10=2560msec)
    analogWrite(LED, i);
    delay(10);
  }
  digitalWrite(LED, 0);			// 500msec 동안 LED 오프
  delay(500);
}