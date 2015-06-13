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
  if(cm >= 50){
    forward();
  }
  else{
    turnRight();
    }
}
