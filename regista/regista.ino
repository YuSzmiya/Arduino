int tDelay = 10;
int rclkPin = 11;
int srclkPin = 10;
int dsPin = 12;

const int D1 = 1;
const int D2 = 2;
const int D3 = 3;
const int D4 = 4;

byte seven_leds[12] = {
  B00000011,
  B10011111,
  B00100101,
  B00001101,
  B10011001,
  B01001001,
  B01000001,
  B00011111,
  B00000001,
  B00011001,
  B11111110,
  B11111111, 
};
void funcShiftReg(int flag, int x){
  switch (flag){
    case 0: // 初期設定用
      digitalWrite(D1, HIGH); 
      digitalWrite(D2, HIGH); 
      digitalWrite(D3, HIGH); 
      digitalWrite(D4, HIGH); 
      break;
    case 1:
      digitalWrite(D1, HIGH);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
      digitalWrite(D4, LOW);
      break;
    case 2:
      digitalWrite(D1, LOW);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, LOW);
      digitalWrite(D4, LOW);
      break;
    case 3:
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, HIGH);
      digitalWrite(D4, LOW);
      break;
    case 4:
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
      digitalWrite(D4, HIGH);
      break;
  }
  digitalWrite(rclkPin, LOW);  
  shiftOut(dsPin, srclkPin, LSBFIRST, seven_leds[x]);
  digitalWrite(rclkPin, HIGH);
  delay(tDelay);
}
void setup(){
  pinMode(rclkPin, OUTPUT);
  pinMode(dsPin, OUTPUT);
  pinMode(srclkPin, OUTPUT);

  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

  funcShiftReg(0, 11);
}
void loop(){
//  funcShiftReg(1, 7);
//  delay(tDelay);
//  funcShiftReg(2, 8);
//  delay(tDelay);
//  funcShiftReg(3, 7);
  delay(tDelay);
  funcShiftReg(4, 8);
  delay(tDelay);

}
