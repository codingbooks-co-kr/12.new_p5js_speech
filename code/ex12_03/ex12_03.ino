// 키보드 문자열로 LED 점멸 제어

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please enter <on> or <off>");
}

void loop() {
  if (Serial.available()) {				// 수신 데이터가 있을 때
    String s = Serial.readStringUntil('\n');	// 수신된 문자열 데이터
    if (s.equals("on")) {				// 수신된 데이터가 “on”일 때
      digitalWrite(LED, 1);
    }
    if (s.equals("off")) {				// 수신된 데이터가 “off”일 때
      digitalWrite(LED, 0);
    }
  }
}