void setup() {
  // put your setup code here, to run once:
  
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  // Starting off with all the pins set up
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(12, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);

  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);

  Serial.begin(9600);
}
// To establish which of the pins 12-8 have been used

int readstuff() {
  if(!digitalRead(12)){
    return 0;
  }
  if(!digitalRead(11)){
    return 1;
  }
  if(!digitalRead(10)){
    return 2;
  }
  if(!digitalRead(9)){
    return 3;
  }
  if(!digitalRead(8)){
    return 4;
  }
  return -1;
}

// to choose the key based on co-ordinates
int readkeys(){
  int descstuff;
  digitalWrite(A0, LOW);
  descstuff = readstuff();
  digitalWrite(A0, HIGH);
  if (descstuff != -1) {
    return descstuff*6 + 0;
   
  }
 
  
  digitalWrite(A1, LOW);
  descstuff = readstuff();
  digitalWrite(A1, HIGH);
  if (descstuff != -1) {
    return descstuff*6 + 1;
  }
 
  
  digitalWrite(A2, LOW);
  descstuff = readstuff();
  digitalWrite(A2, HIGH);
  if (descstuff != -1) {
   return descstuff*6 + 2;
  }
  
  
  digitalWrite(A3, LOW);
  descstuff = readstuff();
  digitalWrite(A3, HIGH);
  if (descstuff != -1) {
    return descstuff*6 + 3;
  }
 
  
  digitalWrite(A4, LOW);
  descstuff = readstuff();
  digitalWrite(A4, HIGH);
  if (descstuff != -1) {
    return descstuff*6 + 4;
  }
  
  
  digitalWrite(A5, LOW);
  descstuff = readstuff();
  digitalWrite(A5, HIGH);
  if (descstuff != -1) {
    return descstuff*6 + 5;
  }
  
// to lookup against the array
   return -1;
}
char n2l[] = {'q', 'w', 'e', 'r', 't', 'y', 'a', 's', 'd', 'f', 'g', 'h', 'z', 'x', 'c', 'v', 'b', 'n', 'u', 'i', 'o', 'p', 0, 0, 'j', 'k', 'l', 'm', ' ', '!'};
void loop() {
  // put your main code here, to run repeatedly:  
  int descstuff;

// to print the text in the serial monitor
  descstuff = readkeys();
  if (descstuff != -1) {
    Serial.print(n2l[descstuff]);
    delay(500);
      switch(n2l[descstuff]){
      default:
      Serial.print("alien soldering");
      break;  
      case 'a':
      Serial.print("lpha");
      alpha();
      break;
      case 'b':
      Serial.print("ravo");
      bravo();
      break;
      case 'c':
      charlie();
      break;
      case 'd':
      delta();
      break;
      case 'e':
      echo();
      break;
      case 'f':
      foxtrot();
      break;
      case 'g':
      golf();
      break;
      case 'h':
      hotel();
      break;
      case 'i':
      india();
      break;
      case 'j':
      juliet();
      break;
      case 'k':
      kilo();
      break;
      case 'l':
      lima();
      break;
      case 'm':
      mike();
      break;
      case 'n':
      november();
      break;
      case 'o':
      oscar();
      break;
      case 'p':
      papa();
      break;
      case 'q':
      quebec();
      break;
      case 'r':
      romeo();
      break;
      case 's':
      sierra();
      break;
      case 't':
      tango();
      break;
      case 'u':
      uniform();
      break;
      case 'v':
      victor();
      break;
      case 'w':
      whiskey();
      break;
      case 'x':
      xray();
      break;
      case 'y':
      yankee();
      break;
      case 'z':
      zulu();
      break;
      
  }
  }
  

 
}


void alpha() {
  dot();
  dash();
}

void bravo() {
  dash();
  dot();
  dot();
  dot();
}

void charlie() {
  dash();
  dot();
  dash();
  dot();
}

void delta() {
  dash();
  dot();
  dot();
}

void echo() {
  dot();
}

void foxtrot() {
  dot();
  dot();
  dash();
  dot();
}

void golf() {
  dash();
  dash();
  dot();
}

void hotel() {
  dot();
  dot();
  dot();
  dot();
}

void india() {
  dot();
  dot();
}

void juliet() {
  dot();
  dash();
  dash();
  dash();
}

void kilo() {
  dash();
  dot();
  dash();
}

void lima() {
  dot();
  dash();
  dot();
  dot();
}

void mike() {
  dash();
  dash();
}

void november() {
  dash();
  dot();
}

void oscar() {
  dash();
  dash();
  dash();
}

void papa() {
  dot();
  dash();
  dash();
  dot();
}

void quebec() {
  dash();
  dash();
  dot();
  dash();
}

void romeo() {
  dot();
  dash();
  dot();
}

void sierra() {
  dot();
  dot();
  dot();
}

void tango() {
  dash();
}

void uniform() {
  dot();
  dot();
  dash();
}

void victor() {
  dot();
  dot();
  dot();
  dash();
}

void whiskey() {
  dot();
  dash();
  dash();
}

void xray() {
  dash();
  dot();
  dot();
  dash();
}

void yankee() {
  dash();
  dot();
  dash();
  dash();
}

void zulu() {
  dash();
  dash();
  dot();
  dot();
}

// 


void dot() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(800);              // wait for a second
  
}

void dash() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(900);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(800);              // wait for a second
  

}



