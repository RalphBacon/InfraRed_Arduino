#include "Arduino.h"
#include <IRremote.h>

int pinRx = 11;
IRrecv irRx(pinRx);
decode_results results;

void setup() {
  Serial.begin(9600);
  irRx.enableIRIn();
  irRx.blink13(true);
  Serial.println("Setup complete");
}

void loop() {
  if (irRx.decode(&results)){

    int typeIR = results.decode_type;

    switch(typeIR) {

      case NEC:
        Serial.print("NEC: ");
        break;

      case SONY:
        Serial.print("SONY: ");
        break;

      case RC5:
        Serial.print("RC5: ");
        break;

      case RC6:
        Serial.print("RC6: ");
        break;

      default:
        Serial.print("Unknown: ");
        break;
    }

    Serial.println(results.value, HEX);
    irRx.resume();
  }

  delay(100);
}

