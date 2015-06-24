//A demo routine

void demo(){
 forward();
 delay(DELAY);
 backward();
 delay(DELAY);
 turnRight();
 delay(DELAY);
 turnLeft();
 delay(DELAY);
}

//A ping Routine

void pingLogic(){
  ping();
  if(cm > 19){
    forward();
    delay(100);
    brake();
    delay(100);
  }
  else{
//    backward();
    delay(1);
//    brake();
    turnRight();
    delay(100);
    brake();
    delay(100);
  }
}
