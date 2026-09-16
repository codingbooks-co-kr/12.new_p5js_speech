// 수신된 데이터 중 정수 1개 추출

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {			// 수신 데이터가 있을 때
    int c = Serial.parseInt();		// 수신된 정수 데이터
    Serial.print("data: ");
    Serial.println(c);
  }
}