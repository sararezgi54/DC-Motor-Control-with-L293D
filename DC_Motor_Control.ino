const int input1 =2;
const int input2 =3;
const int input3 =7;
const int input4 =6;
const int input5 =10;
const int input6 =11;
const int input7 =12;
const int input8 =13;
const int enablePin1 =5;
const int enablePin3 =8;
const int enablePin5 =9;



  
void setup(){
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
  pinMode(input5, OUTPUT);
  pinMode(input6, OUTPUT);
  pinMode(input7, OUTPUT);
  pinMode(input8, OUTPUT);

  pinMode(enablePin1, OUTPUT);
  pinMode(enablePin3, OUTPUT);
  pinMode(enablePin5, OUTPUT);

  
  analogWrite(enablePin1,150);
  analogWrite(enablePin3,150);
  analogWrite(enablePin5,150);


 



  


}
void loop(){

  // 1- للأمام لمدة 30 ثانية
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  digitalWrite(input3, HIGH);
  digitalWrite(input4, LOW);
  digitalWrite(input5, HIGH);
  digitalWrite(input6, LOW);
  digitalWrite(input7, HIGH);
  digitalWrite(input8, LOW);
  delay(30000);

  // 2- للخلف لمدة دقيقة
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  digitalWrite(input3, LOW);
  digitalWrite(input4, HIGH);
  digitalWrite(input5, LOW);
  digitalWrite(input6, HIGH);
  digitalWrite(input7, LOW);
  digitalWrite(input8, HIGH);
  delay(60000);

  // 3- أمام وخلف بالتناوب لمدة دقيقة (6 دورات × 10 ثواني)
  for(int i = 0; i < 6; i++){
    // أمام 5 ثواني
    digitalWrite(input1, HIGH);
    digitalWrite(input2, LOW);
    digitalWrite(input3, HIGH);
    digitalWrite(input4, LOW);
    digitalWrite(input5, HIGH);
    digitalWrite(input6, LOW);
    digitalWrite(input7, HIGH);
    digitalWrite(input8, LOW);
    delay(5000);

    // خلف 5 ثواني
    digitalWrite(input1, LOW);
    digitalWrite(input2, HIGH);
    digitalWrite(input3, LOW);
    digitalWrite(input4, HIGH);
    digitalWrite(input5, LOW);
    digitalWrite(input6, HIGH);
    digitalWrite(input7, LOW);
    digitalWrite(input8, HIGH);
    delay(5000);
  }

  while(true); // يوقف البرنامج بعد انتهاء التسلسل
}
