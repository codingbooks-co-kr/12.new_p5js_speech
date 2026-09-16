// 한 옥타브의 음정 주파수에 해당하는 부저음 출력

#define BUTTON 2
#define BUZZER 13

int note[] = {262, 294, 330, 349, 392, 440, 494, 524};	// 배열 요소는 주파수

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);	// 푸시버튼값 읽기
  if (value == 0) {			// 푸시버튼을 누른 경우
    for (int i = 0; i < 8; i++) {		// 8개의 주파수를 부저음으로 순차 출력
      tone(BUZZER, note[i], 200);
      Serial.print("Freqency(Hz): ");
      Serial.println(note[i]);
      delay(500);
    }
  }
}