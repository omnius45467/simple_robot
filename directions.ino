//The following are functions that make it so you don't have to delare each one of these each time you want to make the robot move
void forward(){
  digitalWrite(motorA_pwm, speedPwr);
  digitalWrite(motorB_pwm, speedPwr);
  digitalWrite(motorA_dir, speedPwr);
  digitalWrite(motorB_dir, speedPwr);
  int motor_A_read = analogRead(motorA_cs);
  Serial.println(motor_A_read);
  int motor_B_read = analogRead(motorB_cs);
  Serial.println(motor_B_read);
  Serial.println("forward");
}

void backward(){
  digitalWrite(motorA_pwm, speedPwr);
  digitalWrite(motorB_pwm, speedPwr);
  digitalWrite(motorA_dir, LOW);
  digitalWrite(motorB_dir, LOW);
  int motor_A_read = analogRead(motorA_cs);
  Serial.println(motor_A_read);
  int motor_B_read = analogRead(motorB_cs);
  Serial.println(motor_B_read);
  Serial.println("backward");
}

void turnRight(){
  digitalWrite(motorA_pwm, speedPwrHalf);
  digitalWrite(motorB_pwm, speedPwrHalf);
  digitalWrite(motorA_dir, speedPwrHalf);
  digitalWrite(motorB_dir, LOW);
  int motor_A_read = analogRead(motorA_cs);
  Serial.println(motor_A_read);
  int motor_B_read = analogRead(motorB_cs);
  Serial.println(motor_B_read);
  Serial.println("Turn Right");
}

void turnLeft(){
  digitalWrite(motorA_pwm, speedPwrHalf);
  digitalWrite(motorB_pwm, speedPwrHalf);
  digitalWrite(motorA_dir, LOW);
  digitalWrite(motorB_dir, speedPwrHalf);
  int motor_A_read = analogRead(motorA_cs);
  Serial.println(motor_A_read);
  int motor_B_read = analogRead(motorB_cs);
  Serial.println(motor_B_read);
  Serial.println("Turn Left");
}

void brake(){
  digitalWrite(motorA_pwm, LOW);
  digitalWrite(motorB_pwm, LOW);
  digitalWrite(motorA_dir, LOW);
  digitalWrite(motorB_dir, LOW);
  int motor_A_read = analogRead(motorA_cs);
  Serial.println(motor_A_read);
  int motor_B_read = analogRead(motorB_cs);
  Serial.println(motor_B_read);
  Serial.println("BRAKE");
}
