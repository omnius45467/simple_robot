void raspPiButtonSetup(){
  pinMode(pwrOutput, OUTPUT);
  pinMode(buttonInput, INPUT);
  digitalWrite(buttonInput, HIGH);
  
}
