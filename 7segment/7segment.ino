void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}
boolean Num_Array[10][7] ={
{1,1,1,1,1,1,0},  //0
{0,1,1,0,0,0,0},  //1
{1,1,0,1,1,0,1},  //2
{1,1,1,1,0,0,1},  //3
{0,1,1,0,0,1,1},  //4
{1,0,1,1,0,1,1}, //5
{1,0,1,1,1,1,1}, //6
{1,1,1,0,0,1,0}, //7
{1,1,1,1,1,1,1}, //8
{1,1,1,1,0,1,1} //9
};
void NumPrint(int Number){
  for(int w = 0; w <= 7; w++){
    digitalWrite(w+2, -Num_Array[Number][w]);
  }
}
void off7SegLED(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}
void de(){
  delay(500);
  off7SegLED();
  delay(50);
}
void loop() {
  NumPrint(0);
  de();
  NumPrint(1);
  de();
  NumPrint(2);
  de();
  NumPrint(3);
  de();
  NumPrint(4);
  de();
  NumPrint(5);
  de();
  NumPrint(6);
  de();
  NumPrint(7);
  de();
  NumPrint(8);
  de();
  NumPrint(9);
  de();  
  
}
