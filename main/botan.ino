void botan(){
  if(digitalRead(S1) == LOW){
    slide = ( slide+1 ) % 4;
    delay(100);
  }
  
  if(digitalRead(S2) == LOW){
    num[slide] = (num[slide]+1) % 10;

    while(digitalRead(S2) == LOW){
      delay(100);
    }
  }
  if(digitalRead(S3) == LOW){
    send = ( send+1) % 2;
    if(send == true){
      distance= (num[0]+(num[1]*10)+(num[2]*100)+(num[3]*1000));
      Serial.print("Distance:"); 
      Serial.print(distance); 
    }else if(send == false){
      num[0]=0;
      num[1]=0;
      num[2]=0;
      num[3]=0;
    }
    delay(100);
  }
}
