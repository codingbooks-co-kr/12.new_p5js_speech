// 수신된 데이터 중 정수 3개 추출

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {			// 수신 데이터가 있을 때
    int r = Serial.parseInt();		// 첫 번째 수신된 정수 데이터
    int g = Serial.parseInt();		// 두 번째 수신된 정수 데이터
    int b = Serial.parseInt();		// 세 번째 수신된 정수 데이터
    Serial.print("red: ");
    Serial.println(r);
    Serial.print("green: ");
    Serial.println(g);
    Serial.print("blue: ");
    Serial.println(b);
  }
}