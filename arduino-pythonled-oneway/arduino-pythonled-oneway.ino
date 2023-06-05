String input;
//String output = " ";
void dot(){
  digitalWrite(8,HIGH);
  delay(250);
  digitalWrite(8,LOW);
}

void dash(){
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
}

void setup() {
 Serial.begin(115100);
 Serial.setTimeout(1);
 pinMode(8,OUTPUT);
}
void loop() {
 while (!Serial.available());
 input = Serial.readString();
 input.toLowerCase();
 for(int i = 0; i< input.length();i++){
  char x = input.charAt(i);
        switch(x) {
            case 'a':
               dot();
               delay(100);
               dash();
               delay(750);
                break;
            case 'b':
                dash();
                delay(100);
                dot();
                delay(100);
                dot();
                delay(100);
                dot();
                delay(750);
                 break;
            case 'c':
                dash();
                delay(100);
                dot();
                delay(100);
                dash();
                delay(100);
                dot();
                delay(750);
                break;
            case 'd':
                dash();
                delay(100);
                dot();
                delay(100);
                dot();
                delay(750);
                break;
            case 'e':
                dot();
                delay(750);
                break;
                
            case 'f':
                dot();
                delay(100);
                dot();
                delay(100);
                dash();
                delay(750);
                break;
             case 'g':
                dash();
                delay(100);
                dash();
                delay(100);
                dot();
                delay(750);
                break;
             case 'h':
                dot();
                delay(100);
                dot();
                delay(100);
                dot();
                delay(100);
                dot();
                delay(750);
                break;
             case 'i':
                dot();
                delay(100);
                dot();
                delay(750);
                break;
             case 'j':
                dot();
                delay(100);
                dash();
                delay(100);
                dash();
                delay(100);
                dash();
                delay(750);
                break;
              case 'k':
                dash();
                delay(100);
                dot();
                delay(100);
                dash();
                delay(750);  
                break;
              case 'l':
                dot();
                delay(100);
                dash();
                delay(100);
                dot();
                delay(100);
                dot();
                delay(750);
                break;
              case 'm':
                dash();
                delay(100);
                dash();
                delay(750);
                break;
              case 'n':
                dash();
                delay(100);
                dot();
                delay(750);
                break;
              case 'o':
                dash();
                delay(100);
                dash();
                delay(100);
                dash();
                delay(750);
                break;
              case 'p':
                dot();
                delay(100);
                dash();
                delay(100);
                dash();
                delay(100);
                dot();
                delay(750);
                break;
              case 'q':
                dash();
                delay(100);
                dash();
                delay(100);
                dot();
                delay(100);
                dash();
                break;
              case 'r':
                dot();
                delay(100);
                dash();
                delay(100);
                dot();
                delay(750);
                break;
              case 's':
                dot();
                delay(100);
                dot();
                delay(100);
                dot();
                delay(750);
                break;
              case 't':
                dash();
                delay(750);
                break;
              case 'u':
                dot();
                delay(100);
                dot();
                delay(100);
                dash();
                delay(750);
                break;
              case 'v':
                dot();
                delay(100);
                dot();
                delay(100);
                dot();
                delay(100);
                dash();
                delay(750);
                break;
              case 'w':
                dot();
                delay(100);
                dash();
                delay(100);
                dash();
                delay(750);  
                break;
              case 'y':
                dash();
                delay(100);
                dot();
                delay(100);
                dash();
                delay(100);
                dash();
                delay(750);
                break;
              case 'z':
                dash();
                delay(100);
                dash();
                delay(100);
                dot();
                delay(100);
                dot();
                delay(750);
                break;
              case ' ':
                delay(3000);
                break;
            default:
                delay(4000);
                break;
            }
  }
 
}
