// 시리얼 통신으로 데이터 송·수신1

void setup() {
  Serial.begin(9600);
  Serial.println("Please input data");
}

void loop() {
  if (Serial.available()) {	   // 수신 확인
    int c = Serial.read();  // 읽기
    Serial.print("data: ");   // 송신
    Serial.println(c);       // 송신
  }
}