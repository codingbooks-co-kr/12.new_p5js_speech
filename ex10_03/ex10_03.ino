// 푸시버튼을 누르는 동안 DC모터 속도 증가, 푸시버튼에서 손을 떼면 속도 감소

#define BUTTON 2
#define DCMOTOR_FWD 9
#define DCMOTOR_BWD 10

int speed = 0;				// 전역변수 선언

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(DCMOTOR_FWD, OUTPUT);
  pinMode(DCMOTOR_BWD, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);	// 지역변수 선언, 푸시버튼값 읽기
  if (value == 0) {			// 푸시버튼을 누른 경우
    speed += 10;            		// speed는 10씩 증가
  } else {				// 푸시버튼을 누르지 않은 경우
    speed -= 10;            		// speed는 10씩 감소
  }
  speed = constrain(speed, 0, 255);	// speed = 0∼255의 값으로 범위 제한
  analogWrite(DCMOTOR_FWD, speed);
  analogWrite(DCMOTOR_BWD, 0);
  Serial.print("Speed: ");
  Serial.println(speed);
  delay(100);
}