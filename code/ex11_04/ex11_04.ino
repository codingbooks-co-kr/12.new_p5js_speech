// RGB LED가 8가지 색상으로 차례로 출력

#define RedLED 11
#define GreenLED 5
#define BlueLED 3

byte rgbColor[8][3] = {		// 2차원 배열(8×3)
  {000, 000, 000}, 		// black: rgbColor[0][0], rgbColor[0][1], rgbColor[0][2]
  {255, 000, 000}, 		// red: rgbColor[1][0], rgbColor[1][1], rgbColor[1][2]
  {000, 255, 000}, 		// green: rgbColor[2][0], rgbColor[2][1], rgbColor[2][2]
  {000, 000, 255}, 		// blue: rgbColor[3][0], rgbColor[3][1], rgbColor[3][2]
  {255, 255, 000}, 		// yellow: rgbColor[4][0], rgbColor[4][1], rgbColor[4][2]
  {255, 000, 255}, 		// magenta: rgbColor[5][0], rgbColor[5][1], rgbColor[5][2]
  {000, 255, 255}, 		// cyan: rgbColor[6][0], rgbColor[6][1], rgbColor[6][2]
  {255, 255, 255}, 		// white: rgbColor[7][0], rgbColor[7][1], rgbColor[7][2]
};

void setup() {
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
}

void loop() {
  for (int i = 0 ; i < 8 ; i++) {
    analogWrite(RedLED, rgbColor[i][0]);
    analogWrite(GreenLED, rgbColor[i][1]);
    analogWrite(BlueLED, rgbColor[i][2]);
    delay(1000);
  }
}