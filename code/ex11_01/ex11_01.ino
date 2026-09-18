// 푸시버튼으로 LED 점등 (배열과 반복문 사용) 

#define BUTTON 2
const int LED[] = {6, 7, 8, 12};

void setup() {
  pinMode(BUTTON, INPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {			// 푸시버튼을 누른 경우
    for (int i = 0; i < 4; i++) {		// LED 네 개 모두 점등
      digitalWrite(LED[i], 1);
    }
  } else {				// 푸시버튼을 누르지 않은 경우
    for (int i = 0; i < 4; i++) {		// LED 네 개 모두 소등
      digitalWrite(LED[i], 0);
    }
  }
}