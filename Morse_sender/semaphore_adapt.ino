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
  pinMode(7, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);
pinMode(1, OUTPUT);
pinMode(0, OUTPUT);

digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, LOW);
digitalWrite(1, LOW);
digitalWrite(0, LOW);

  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);

 // Serial.begin(9600);
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
      alpha();
      break;
      case 'b':
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
    //  case" ":
     // space();
    //  break;
      
  }
  }
  

 
}


void alpha() {
  digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, LOW);
digitalWrite(1, LOW);
digitalWrite(0, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(100);
}

void bravo() {
  digitalWrite(3, HIGH);
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(1, LOW);
  delay(100);
}

void charlie() {
 digitalWrite(3, HIGH);
  digitalWrite(0, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(0, LOW);
  delay(100);
}

void delta() {
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  delay(100);
}

void echo() {
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  delay(100);
}

void foxtrot() {
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  delay(100);
}

void golf() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(100);
}

void hotel() {
 digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(100);
}

void india() {
  digitalWrite(2, HIGH);
  digitalWrite(0, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(0, LOW);
  delay(100);
}

void juliet() {
 digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  delay(100);
}

void kilo() {
digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(7, LOW);
  delay(100);
}

void lima() {
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  delay(100);
}

void mike() {
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  delay(100);
}

void november() {
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(100);
}

void oscar() {
  digitalWrite(1, HIGH);
  digitalWrite(0, HIGH);
  delay(1000);
  digitalWrite(1, LOW);
  digitalWrite(0, LOW);
  delay(100);
}

void papa() {
 digitalWrite(1, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(1, LOW);
  digitalWrite(7, LOW);
  delay(100);
}

void quebec() {
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(1, LOW);
  digitalWrite(6, LOW);
  delay(100);
}

void romeo() {
  digitalWrite(1, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(1, LOW);
  digitalWrite(5, LOW);
  delay(100);
}

void sierra() {
   digitalWrite(1, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(1, LOW);
  digitalWrite(4, LOW);
  delay(100);
}

void tango() {
   digitalWrite(0, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(0, LOW);
  digitalWrite(7, LOW);
  delay(100);
}

void uniform() {
   digitalWrite(0, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(0, LOW);
  digitalWrite(6, LOW);
  delay(100);
}

void victor() {
   digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  delay(100);
}

void whiskey() {
 digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(100);
}

void xray() {
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  delay(100);
}

void yankee() {
   digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  delay(100);
}

void zulu() {
   digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  delay(100);
}


  

// 





