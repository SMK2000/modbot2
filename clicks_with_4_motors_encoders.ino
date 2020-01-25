  //This code prints the clicks given by the encoder
  //Dont forget to edit the pin numbers
  //enable pins have to be given PWM.
  int en1 = 3;
  int en2 = 6;
  int en3 = 10;
  int en4 = 11;
  //terminal pins to be assigned digital.
  int i1 = 2;
  int i2 = 4;
  int i3 = 7; 
  int i4 = 5; 
  int i5 = 8;
  int i6 = 12;
  int i7 = 13;
  int i8 = 9;
  long click1 = 0;
  long click2 = 0;
  int a1_current, a1_prev = 0;
  int a2_current, a2_prev = 0;
  void scan() //reads all the outA and outB pins
  {
    a1_current = digitalRead(A0);
    a2_current = digitalRead(A1);
    
  }
  void setup()
  { Serial.begin(2000000);
    pinMode(en1, OUTPUT);
    pinMode(en2, OUTPUT);
    pinMode(en3, OUTPUT);
    pinMode(en4, OUTPUT);
    pinMode(i1, OUTPUT);
    pinMode(i2, OUTPUT);
    pinMode(i3, OUTPUT);
    pinMode(i4, OUTPUT);
    pinMode(i5, OUTPUT);
    pinMode(i6, OUTPUT);
    pinMode(i7, OUTPUT);
    pinMode(i8, OUTPUT);
  
    //analogWrite(en1, 106);
    analogWrite(en2, 80);
    //analogWrite(en3, 106);
    analogWrite(en4, 106);
    digitalWrite(i1, HIGH);     
    digitalWrite(i2, LOW);
    digitalWrite(i3, HIGH);
    digitalWrite(i4, LOW);
    digitalWrite(i5, HIGH);
    digitalWrite(i6, LOW);
    digitalWrite(i7, HIGH);
    digitalWrite(i8, LOW);
  
  
  }
  
  void loop()
  {
    scan();
    if (a1_current != a1_prev)
    {
      click1++;
  
      a1_prev = a1_current;
      Serial.print(click1);
      Serial.print("    ");
      Serial.print(click2);
      Serial.println("    ");
    }
    if (a2_current != a2_prev)
    {
      click2++;
  
      a2_prev = a2_current;
      Serial.print(click1);
      Serial.print("    ");
      Serial.print(click2);
      Serial.println("    ");
    }
  }
