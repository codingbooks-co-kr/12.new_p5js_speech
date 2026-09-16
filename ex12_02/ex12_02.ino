// 키보드 문자로 부저 제어

#define BUZZER 13

void setup() {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please type k, i, m");
}

void loop() {
  if (Serial.available()) {			// 수신 데이터가 있을 때
    char c = Serial.read();		// 수신 데이터(문자) 읽기
    if (c == 'k') {			// 수신 문자가 ‘k’일 때
      tone(BUZZER, 262, 500);
    } else if (c == 'i') {		// 수신 문자가 ‘i’일 때
      tone(BUZZER, 330, 500);
    } else if (c == 'm') {		// 수신 문자가 ‘m’일 때
      tone(BUZZER, 392, 500);
    }
  }
}