// グローバル変数
// ボタン用
const int S3 = 5;
const int S2 = 6;
const int S1 = 7;

int slide=0;
int num[4] = {1, 2, 3, 4};
int send=0;

// セグメント用
int tDelay = 10;
int rclkPin = 11;
int srclkPin = 9;
int dsPin = 12;

const int D1 = 1;
const int D2 = 2;
const int D3 = 3;
const int D4 = 4;

// 超音波センサ用
int TRIG = 8;
int ECHO = 9;
int LED = 13;

double duration = 0; 
unsigned short distance = 0; 
double diff_dis = 0; 
double speed_of_sound = 331.5 + 0.6 * 21; // 21℃の気温の想定 



//初期化
void setup() {
  // ボタン用
  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
  pinMode(S3, INPUT_PULLUP);
  Serial.begin( 9600 );

  // セグメント用
  pinMode(rclkPin, OUTPUT);
  pinMode(dsPin, OUTPUT);
  pinMode(srclkPin, OUTPUT);

  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

  funcShiftReg(0, 11);

  // 超音波センサ用909io
  Serial.begin( 9600 ); 
  pinMode(ECHO, INPUT ); 
  pinMode(TRIG, OUTPUT ); 
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);

}

void loop() {
//  botan();
  regista();
//  senser();
}
