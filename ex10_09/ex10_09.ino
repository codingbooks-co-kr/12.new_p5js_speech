// 푸시버튼으로 서보모터 제어

#include <Servo.h>		// Servo 클래스가 선언된 헤더파일 가져오기
#define BUTTON 2
#define SERVO A0
Servo servo;			// Servo 클래스를 이용한 servo 객체의 선언 및 생성

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(SERVO, OUTPUT);
  servo.attach(SERVO);		// SERVO핀(→A0)을 servo 객체에 연결
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    for (int i = 0; i < 180; i++) {
      servo.write(i);
      delay(20);		// 서보모터의 회전 시 지연 시간 필요
    }
    for (int i = 180; i >= 0; i--) {
      servo.write(i);
      delay(20);		// 서보모터의 회전 시 지연 시간 필요
    }
  }
}