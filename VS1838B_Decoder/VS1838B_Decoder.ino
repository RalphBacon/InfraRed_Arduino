// The library we need for this demo
#include <IRremote.h>

// The input GPIO pin for the serial data from the IR LED
int pinRx = 11;

// Create the object for the IR receiver
IRrecv irRx(pinRx);

// Create a data type to hold the decoded results
decode_results results;

// Our HEX values from the transmitter
String codes[] = {"FF6897","FF9867","FFB04F","FF30CF", "FF18E7","FF7A85","FF10EF","FF38C7", \
"FF5AA5", "FF4AB5", "FF42BD", "FF52AD", "FF629D", "FFA857", "FF22DD", "FFC23D", "FF02FD"};

// And what they mean in real life
String match[] = {"1","2","3","4","5","6","7","8","9","0","*","#","UP","DOWN","LEFT","RIGHT","OK"};

//---------------------------------------------------------------------------
// SETUP     SETUP     SETUP     SETUP     SETUP     SETUP     SETUP    SETUP
//---------------------------------------------------------------------------
void setup() {
  // Debug window 
  Serial.begin(9600);

  // Start the receiver
  irRx.enableIRIn();

  // Tell it whether to flash pin 13 (LED) when receiving data
  irRx.blink13(true);

  // All done
  Serial.println("Set-up complete");
}

//---------------------------------------------------------------------------
// LOOP     LOOP    LOOP    LOOP    LOOP    LOOP    LOOP    LOOP    LOOP    
//---------------------------------------------------------------------------
void loop() {
  // If we have data to display
  if (irRx.decode(&results)){

    //Serial.println(results.value, HEX);

    // Convert the data into meaningful values for us
    matchCode(results);

    // Continue the IR receiving mode
    irRx.resume();
  }

  // Small delay between receiving data
  delay(100);
}

//---------------------------------------------------------------------------
// CONVERT THE HEX VALUE OF THE IR CODE TO A MEANINGFUL HUMAN VALUE
//---------------------------------------------------------------------------
void matchCode (decode_results results) {

  String codeVal = String(results.value,HEX);
  codeVal.toUpperCase();
  
  //Serial.print("Searching for: "); Serial.println(codeVal);

  for (unsigned int cnt=0; cnt< sizeof codes; cnt++) {
    if ( codeVal == codes[cnt]) {
      Serial.println(match[cnt]);
      break;
    }
  }
}

