void senser() { 

  digitalWrite(TRIG, LOW);  
  delayMicroseconds(2);

  digitalWrite( TRIG, HIGH ); 
  delayMicroseconds( 10 );

  digitalWrite( TRIG, LOW );

  duration = pulseIn( ECHO, HIGH );  
  digitalWrite(LED, HIGH);

  if (duration > 0) { 

    duration = duration / 2;  
    distance = duration * speed_of_sound * 100 / 1000000; 
    
    Serial.print("Distance:"); 
    Serial.print(distance); 
    Serial.println(" cm");
  } 
  
  if(distance < 30 ){
    digitalWrite(LED, LOW);
    delay(200);  
  }
} 
