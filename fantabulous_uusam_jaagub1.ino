// Motor 1
const int M1_IN1 = 2;
const int M1_IN2 = 3;

// Motor 2
const int M2_IN1 = 4;
const int M2_IN2 = 5;

// Motor 3
const int M3_IN1 = 6;
const int M3_IN2 = 7;

// Motor 4
const int M4_IN1 = 8;
const int M4_IN2 = 9;

void setup() {

  pinMode(M1_IN1, OUTPUT);
  pinMode(M1_IN2, OUTPUT);

  pinMode(M2_IN1, OUTPUT);
  pinMode(M2_IN2, OUTPUT);

  pinMode(M3_IN1, OUTPUT);
  pinMode(M3_IN2, OUTPUT);

  pinMode(M4_IN1, OUTPUT);
  pinMode(M4_IN2, OUTPUT);

}

void loop() {

  // للأمام 30 ثانية
  moveForward();
  delay(30000);

  // للخلف 60 ثانية
  moveBackward();
  delay(60000);

  // يمين ويسار لمدة دقيقة
  for(int i = 0; i < 15; i++) {

    turnRight();
    delay(2000);

    turnLeft();
    delay(2000);

  }

  
  stopMotors();

  while(true);

}


void moveForward() {

  digitalWrite(M1_IN1,HIGH);
  digitalWrite(M1_IN2,LOW);

  digitalWrite(M2_IN1,HIGH);
  digitalWrite(M2_IN2,LOW);

  digitalWrite(M3_IN1,HIGH);
  digitalWrite(M3_IN2,LOW);

  digitalWrite(M4_IN1,HIGH);
  digitalWrite(M4_IN2,LOW);

}

void moveBackward() {

  digitalWrite(M1_IN1,LOW);
  digitalWrite(M1_IN2,HIGH);

  digitalWrite(M2_IN1,LOW);
  digitalWrite(M2_IN2,HIGH);

  digitalWrite(M3_IN1,LOW);
  digitalWrite(M3_IN2,HIGH);

  digitalWrite(M4_IN1,LOW);
  digitalWrite(M4_IN2,HIGH);

}

void turnRight() {

  // اليسار للأمام
  digitalWrite(M1_IN1,HIGH);
  digitalWrite(M1_IN2,LOW);

  digitalWrite(M3_IN1,HIGH);
  digitalWrite(M3_IN2,LOW);

  // اليمين للخلف
  digitalWrite(M2_IN1,LOW);
  digitalWrite(M2_IN2,HIGH);

  digitalWrite(M4_IN1,LOW);
  digitalWrite(M4_IN2,HIGH);

}

void turnLeft() {

  // اليمين للأمام
  digitalWrite(M2_IN1,HIGH);
  digitalWrite(M2_IN2,LOW);

  digitalWrite(M4_IN1,HIGH);
  digitalWrite(M4_IN2,LOW);

  // اليسار للخلف
  digitalWrite(M1_IN1,LOW);
  digitalWrite(M1_IN2,HIGH);

  digitalWrite(M3_IN1,LOW);
  digitalWrite(M3_IN2,HIGH);

}

void stopMotors() {

  digitalWrite(M1_IN1,LOW);
  digitalWrite(M1_IN2,LOW);

  digitalWrite(M2_IN1,LOW);
  digitalWrite(M2_IN2,LOW);

  digitalWrite(M3_IN1,LOW);
  digitalWrite(M3_IN2,LOW);

  digitalWrite(M4_IN1,LOW);
  digitalWrite(M4_IN2,LOW);

}