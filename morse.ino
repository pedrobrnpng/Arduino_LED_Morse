int DOT = 600;
int DASH = 600;
int LETTERS = 400;
int WORDS = 600;
int SYMBOL = 100;


String letters[26]={
// A     B      C       D     E     F       G      H       I
".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
// J      K       L     M     N     O       P       Q       R
".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
// S    T     U       V       W       X     Y       Z
"...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." 
};


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  delay(1000);
  String message = "BOA TARDE"; // message to print
  for(int i = 0; i < message.length(); i++){
    switch(message[i]){
      case 'A':
          dot();
          dash();
          letterspace();
          break;
      case 'B':
          dash();
          dot();
          dot();
          dot();
          letterspace();
          break;
      case 'C':          
          dash();
          dot();
          dash();
          dot();
          letterspace();
          break;
        case 'D':
          dash();
          dot();
          dot();
          letterspace();
          break;
        case 'E':
          dot();
          letterspace();
          break;
        case 'F':
          dot();
          dot();
          dash();
          dot();
          letterspace();
          break;
        case 'G':
          dash();
          dash();
          dot();
          letterspace();
          break;
        case 'H':
          dot();
          dot();
          dot();
          dot();
          letterspace();
          break;
        case 'I':
          dot();
          dot();
          letterspace();
          break;
        case 'J':
          dot();
          dash();
          dash();
          dash();
          letterspace();
          break;
        case 'K':
          dash();
          dot();
          dash();
          letterspace();
          break;
        case 'L':
          dot();
          dash();
          dot();
          dot();
          letterspace();
          break;
        case 'M':
          dash();
          dash();
          letterspace();
          break;
        case 'N':
          dash();
          dot();
          letterspace();
        case 'O':
          dash();
          dash();
          dash();
          letterspace();
          break;
        case 'P':
          dot();
          dash();
          dash();
          dot();
          letterspace();
          break;
        case 'Q':
          dash();
          dash();
          dot();
          dash();
          letterspace();
          break;
        case 'R':
          dot();
          dash();
          dot();
          letterspace();
          break;
        case 'S':
          dot();
          dot();
          dot();
          letterspace();
          break;
        case 'T':
          dash();
          letterspace();
          break;
        case 'U':
          dot();
          dot();
          dash();
          letterspace();
          break;
        case 'V':
          dot();
          dot();
          dot();
          dash();
          letterspace();
          break;
        case 'W':
          dot();
          dash();
          dash();
          letterspace();
          break;
        case 'X':
          dash();
          dot();
          dot();
          dash();
          letterspace();
          break;
        case 'Y':
          dash();
          dot();
          dash();
          dash();
          letterspace();
        case 'Z':
          dash();
          dash();
          dot();
          dot();
          letterspace();
          break;
        case ' ':
          wordspace();
          break;
    }
  }
  while(true){
    digitalWrite(LED_BUILTIN, LOW);
  }
}

void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(DASH);
  digitalWrite(LED_BUILTIN, LOW);
  delay(SYMBOL);
}

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(DOT);
  digitalWrite(LED_BUILTIN, LOW);
  delay(SYMBOL);
}

void letterspace(){
  delay(LETTERS);
}
void wordspace(){
  delay(WORDS);
}

void start(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
}
