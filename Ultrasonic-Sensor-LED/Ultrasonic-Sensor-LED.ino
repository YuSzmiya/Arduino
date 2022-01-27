int TRIG = 7;  //Trigは7番Pinを利用 

int ECHO = 8;  //Echoは8番Pinを利用 

 

double duration = 0; 
double distance = 0; 
double diff_dis = 0; 
double speed_of_sound = 331.5 + 0.6 * 21; // 21℃の気温の想定 

 

void setup() { 

  Serial.begin( 9600 ); 
  pinMode(ECHO, INPUT ); 
  pinMode(TRIG, OUTPUT ); 
  pinMode(2, OUTPUT);

} 

 

void loop() { 

  digitalWrite(TRIG, LOW);  

  delayMicroseconds(2); //↑しっかりと、TrigをLOWに 

  digitalWrite( TRIG, HIGH ); 

  delayMicroseconds( 10 );//↑Trigを10μ秒HIGHに 

  digitalWrite( TRIG, LOW );//↑しっかりと、TrigをLOWに 

  //↓往復にかかった時間が返却される[マイクロ秒] 

  duration = pulseIn( ECHO, HIGH );  
  
  digitalWrite(2, LOW);

 

  if (duration > 0) { 

    duration = duration / 2; // 片道の時間を求める 


    distance = duration * speed_of_sound * 100 / 1000000; 


    Serial.print("Distance:"); 

    Serial.print(distance); 

    Serial.println(" cm"); 
    

  } 

  if(distance <= 60 ){
    digitalWrite(2, HIGH);
    delay(200);  
  }
} 