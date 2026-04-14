//////////////////////////////////////////////////////////////////////////
// DEFINES, MACROS, AND CONSTANTS
// * Define takes texts and expands it [Preprocesser (C/C++)]
// * Constant allows us to tell the type of something so the compiler knows more about it. Doesn't change.
//////////////////////////////////////////////////////////////////////////
 
 // pins for external inputs
 const int BLUE_BUTTON_PIN    = 7;
 const int RED_BUTTON_PIN     = 6;
 const int YELLOW_BUTTON_PIN  = 5;
 const int GREEN_BUTTON_PIN   = 4;

// pins for external output to LEDs
 const int BLUE_LED_PIN   = 13;
 const int RED_LED_PIN    = 12;
 const int YELLOW_LED_PIN = 11;
 const int GREEN_LED_PIN  = 10;

const int BUZZER_PIN = 3;

// tones (freq) for colors
const int BLUE_TONE = 209;
const int RED_TONE = 310;
const int YELLOW_TONE = 252;
const int GREEN_TONE = 415;


/////////////////////////////////////////////////////////////////////////////
// GLOBALS
/////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////
// FUNCTIONS
/////////////////////////////////////////////////////////////////////////////



void setup() {    // put your setup code here, to run once:

// initialize output pins
pinMode(BLUE_LED_PIN, OUTPUT);
pinMode(RED_LED_PIN, OUTPUT);
pinMode(YELLOW_LED_PIN, OUTPUT);
pinMode(GREEN_LED_PIN, OUTPUT);

// initialize buzzer pin
pinMode(BUZZER_PIN, OUTPUT);



// initalizing input pins
pinMode(BLUE_BUTTON_PIN, INPUT);
pinMode(RED_BUTTON_PIN, INPUT);
pinMode(YELLOW_BUTTON_PIN, INPUT);
pinMode(GREEN_BUTTON_PIN, INPUT);

// initialize serial port
// baud rate = how many bits/s the communications happening at. 115k kilobits
Serial.begin( 115200 ); // C++ allows for multiple function overloaded w/ different parameter lists

// write to terminal
Serial.write("\n\rsetup() function complete.");

}

void loop() {   // Read the input pins

  // BLUE LED //////////

  // read button input
  if ( !digitalRead (BLUE_BUTTON_PIN) ) // ! = Boolean NOT. If digital read is 0..
  { 
    digitalWrite(BLUE_LED_PIN, HIGH );
    
    // play tone on buzzer for this color, using freq from classic Simon
    tone(BUZZER_PIN, BLUE_TONE, 500);

    // write to terminal
    Serial.write("\nBLUE button pressed"); // \n = carriage return and line feed
  }
  else 
  { 
    // turn off LED
    digitalWrite(BLUE_LED_PIN, LOW );
  }
    // 5v going through anode (+), cathode (-), so HIGH turns on LED.

    // RED LED ///////////

    // read button input
  if ( !digitalRead (RED_BUTTON_PIN) ) // ! = Boolean NOT. If digital read is 0..
  { 
    digitalWrite(RED_LED_PIN, HIGH );

    // play tone on buzzer for this color, using freq from classic Simon
    tone(BUZZER_PIN, RED_TONE, 500);

    // write to terminal
    Serial.write("\nRED button pressed"); // \n = carriage return and line feed
  }
  else 
  { 
    // turn off LED
    digitalWrite(RED_LED_PIN, LOW );
  }

  // YELLOW LED ///////////

  // read button input
  if ( !digitalRead (YELLOW_BUTTON_PIN) ) // ! = Boolean NOT. If digital read is 0..
  { 
    digitalWrite(YELLOW_LED_PIN, HIGH );

    // play tone on buzzer for this color, using freq from classic Simon
    tone(BUZZER_PIN, YELLOW_TONE, 500);

    // write to terminal
    Serial.write("\nYELLOW button pressed"); // \n = carriage return and line feed
  }
  else 
  { 
    // turn off LED
    digitalWrite(YELLOW_LED_PIN, LOW );
  }

  // GREEN LED ///////////

  // read button input
  if ( !digitalRead (GREEN_BUTTON_PIN) ) // ! = Boolean NOT. If digital read is 0..
  { 
    digitalWrite(GREEN_LED_PIN, HIGH );

    // play tone on buzzer for this color, using freq from classic Simon
    tone(BUZZER_PIN, GREEN_TONE, 500);

    // write to terminal
    Serial.write("\nGREEN button pressed"); // \n = carriage return and line feed
  }
  else 
  { 
    // turn off LED
    digitalWrite(GREEN_LED_PIN, LOW );
  }




delay(200);

}
