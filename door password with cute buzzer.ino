#include <Keypad.h>
#include <Servo.h>
//h b b c
int speakerPin = 12; 
Servo myservo;
const byte ROWS = 4; 
const byte COLS = 4; 
boolean acr = false;
boolean arc = false;
char keys[ROWS][COLS] = {
  {'m', 'n', 'o', 'p'},
  {'e', 'f', 'g', 'h'},
  {'a', 'b', 'c', 'd'},
  {'i', 'j', 'k', 'l'},
};
byte rowPins[ROWS] = {2, 3, 4, 5}; 
byte colPins[COLS] = {6, 7, 8, 9}; 

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  myservo.attach(13);
  Serial.begin (9600);
  hold();
  pinMode(speakerPin, OUTPUT); 

}
void loop() {

}
void hold() {
  Serial.println("checking");
  myservo.write(0);
  for (int x = 1; x > 0; x++) {
    char key = keypad.getKey();
    if (key != NO_KEY) {
      Serial.println(key);

      if (key == 'a') {
        tone(speakerPin, 2093, 100);
        hold();
      }
      if (key == 'b') {
        tone(speakerPin, 2349, 100);
        hold();
      }
      if (key == 'c') {
        tone(speakerPin, 2637, 100);
        hold();
      }
      if (key == 'd') {
        tone(speakerPin, 2793, 100);
        hold();
      }
      if (key == 'e') {
        tone(speakerPin, 3136, 100);
        hold();
      }
      if (key == 'f') {
        tone(speakerPin, 3520, 100);
        hold();
      }
      if (key == 'g') {
        tone(speakerPin, 3951, 100);
        hold();
      }
      if (key == 'h') {
        tone(speakerPin, 4186, 100);
      }
      check();
      if (key == 'i') {
        tone(speakerPin, 2093, 100);
        hold();
      }
      if (key == 'j') {
        tone(speakerPin, 2349, 100);
        hold();
      }
      if (key == 'k') {
        tone(speakerPin, 2637, 100);
        hold();
      }
      if (key == 'l') {
        tone(speakerPin, 2793, 100);
        hold();
      }
      if (key == 'm') {
        tone(speakerPin, 3136, 100);
        hold();
      }
      if (key == 'n') {
        tone(speakerPin, 3520, 100);
        hold();
      }
      if (key == 'o') {
        tone(speakerPin, 3951, 100);
        hold();
      }
      if (key == 'p') {
        tone(speakerPin, 4186, 100);
        hold();
      }

    }
  }
}

void beep (unsigned char speakerPin, int frequencyInHertz, long timeInMilliseconds) { // the sound producing function
  int x;
  long delayAmount = (long)(1000000 / frequencyInHertz);
  long loopTime = (long)((timeInMilliseconds * 1000) / (delayAmount * 2));
  for (x = 0; x < loopTime; x++)
  {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(delayAmount);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(delayAmount);
  }
}

void check() {

    for (int x = 1; x > 0; x++) {
        char key = keypad.getKey();
  if (key != NO_KEY) {
    Serial.println(key);

    if (key == 'a') {
      tone(speakerPin, 2093, 100);
      hold();
    }
    if (key == 'b') {
      tone(speakerPin, 2349, 100);
      checkA();
    }
    if (key == 'c') {
      tone(speakerPin, 2637, 100);
      hold();
    }
    if (key == 'd') {
      tone(speakerPin, 2793, 100);
      hold();
    }
    if (key == 'e') {
      tone(speakerPin, 3136, 100);
      hold();
    }
    if (key == 'f') {
      tone(speakerPin, 3520, 100);
      hold();
    }
    if (key == 'g') {
      tone(speakerPin, 3951, 100);
      hold();
    }
    if (key == 'h') {
      tone(speakerPin, 4186, 100);
      hold();
    }
    if (key == 'i') {
      tone(speakerPin, 2093, 100);
      hold();
    }
    if (key == 'j') {
      tone(speakerPin, 2349, 100);
      hold();
    }
    if (key == 'k') {
      tone(speakerPin, 2637, 100);
      hold();
    }
    if (key == 'l') {
      tone(speakerPin, 2793, 100);
      hold();
    }
    if (key == 'm') {
      tone(speakerPin, 3136, 100);
      hold();
    }
    if (key == 'n') {
      tone(speakerPin, 3520, 100);
      hold();
    }
    if (key == 'o') {
      tone(speakerPin, 3951, 100);
      hold();
    }
    if (key == 'p') {
      tone(speakerPin, 4186, 100);
      hold();
    }

  }
}
}
void checkA() {
      for (int x = 1; x > 0; x++) {
          char key = keypad.getKey();
  if (key != NO_KEY) {
    Serial.println(key);

    if (key == 'a') {
      tone(speakerPin, 2093, 100);
      hold();
    }
    if (key == 'b') {
      tone(speakerPin, 2349, 100);
      checkB();
    }
    if (key == 'c') {
      tone(speakerPin, 2637, 100);
      hold();
    }
    if (key == 'd') {
      tone(speakerPin, 2793, 100);
      hold();
    }
    if (key == 'e') {
      tone(speakerPin, 3136, 100);
      hold();
    }
    if (key == 'f') {
      tone(speakerPin, 3520, 100);
      hold();
    }
    if (key == 'g') {
      tone(speakerPin, 3951, 100);
      hold();
    }
    if (key == 'h') {
      tone(speakerPin, 4186, 100);
      hold();
    }
    if (key == 'i') {
      tone(speakerPin, 2093, 100);
      hold();
    }
    if (key == 'j') {
      tone(speakerPin, 2349, 100);
      hold();
    }
    if (key == 'k') {
      tone(speakerPin, 2637, 100);
      hold();
    }
    if (key == 'l') {
      tone(speakerPin, 2793, 100);
      hold();
    }
    if (key == 'm') {
      tone(speakerPin, 3136, 100);
      hold();
    }
    if (key == 'n') {
      tone(speakerPin, 3520, 100);
      hold();
    }
    if (key == 'o') {
      tone(speakerPin, 3951, 100);
      hold();
    }
    if (key == 'p') {
      tone(speakerPin, 4186, 100);
      hold();
    }
  }
}
}
void checkB() {
      for (int x = 1; x > 0; x++) {
          char key = keypad.getKey();
  if (key != NO_KEY) {
    Serial.println(key);

    if (key == 'a') {
      tone(speakerPin, 2093, 100);
      hold();
    }
    if (key == 'b') {
      tone(speakerPin, 2349, 100);
      hold();
    }
    if (key == 'c') {
      tone(speakerPin, 2637, 100);
      myservo.write(90);
      delay(5000);
      hold();
    }
    if (key == 'd') {
      tone(speakerPin, 2793, 100);
      hold();
    }
    if (key == 'e') {
      tone(speakerPin, 3136, 100);
      hold();
    }
    if (key == 'f') {
      tone(speakerPin, 3520, 100);
      hold();
    }
    if (key == 'g') {
      tone(speakerPin, 3951, 100);
      hold();
    }
    if (key == 'h') {
      tone(speakerPin, 4186, 100);
      hold();
    }
    if (key == 'i') {
      tone(speakerPin, 2093, 100);
      hold();
    }
    if (key == 'j') {
      tone(speakerPin, 2349, 100);
      hold();
    }
    if (key == 'k') {
      tone(speakerPin, 2637, 100);
      hold();
    }
    if (key == 'l') {
      tone(speakerPin, 2793, 100);
      hold();
    }
    if (key == 'm') {
      tone(speakerPin, 3136, 100);
      hold();
    }
    if (key == 'n') {
      tone(speakerPin, 3520, 100);
      hold();
    }
    if (key == 'o') {
      tone(speakerPin, 3951, 100);
      hold();
    }
    if (key == 'p') {
      tone(speakerPin, 4186, 100);
      hold();
    }
  }
}
}
