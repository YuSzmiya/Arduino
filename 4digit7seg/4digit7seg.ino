// PinMode 設定
const int D1 = 10;
const int D2 = 11;
const int D3 = 12;
const int D4 = 13;

void setup(){
  for(int i=2; i<=9; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}
boolean Num_Array[3][8] = {
  {0,0,1,0,0,0,0,0},
  {0,0,0,0,0,0,0,0}
};

void NumPrint(int n){
  for(int w=0; w<=7; w++){
    digitalWrite(w+2, Num_Array[n][w]);
  }
}
void OFF(){
  for(int i=2; i<=9; i++){
    digitalWrite(i, HIGH);
  }
}
void loop(){
  digitalWrite(D1,1);
  OFF();
  NumPrint(0); 
  delay(2);
  digitalWrite(D2,0);3
  OFF();
  digitalWrite(D3,1);
  OFF();
  NumPrint(1); 
  digitalWrite(D4,0);
  OFF();
  // NumPrint();
  // delay(200);
}
