// 푸시버튼 누를 때마다 부저의 주파수 증가

#define BUTTON 2
#define BUZZER 13
int preValue = 0, freq = 100;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);		// 푸시버튼값 읽기
  if (value == 0 && preValue == 1) {		// 푸시버튼을 누른 순간에만 if문은 참이 됨!
    tone(BUZZER, freq, 500);
    Serial.print("Freqency(Hz): ");
    Serial.println(freq);
    if (freq >= 500) {
      freq = 100;
    } else {
      freq += 100;
    }
  }
  preValue = value;
}