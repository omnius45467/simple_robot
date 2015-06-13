int raspPiButtonTrigger(){
 int buttonState = digitalRead(buttonInput);
  
  if(buttonState == HIGH){
  digitalWrite(pwrOutput, LOW);
  
  }
  else{
  digitalWrite(pwrOutput, HIGH);
  }
}
