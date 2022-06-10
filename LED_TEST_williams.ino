// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        6 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 64 // Popular NeoPixel ring size

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 200 // Time (in milliseconds) to pause between pixels

void setup() {
  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}
void right () {
  int R = 0;
  int G = 50;
  int B = 0;
  pixels.setPixelColor(3, pixels.Color(R, G, B));
  pixels.setPixelColor(4, pixels.Color(R, G, B));
  pixels.setPixelColor(10, pixels.Color(R, G, B));
  pixels.setPixelColor(11, pixels.Color(R, G, B));
  pixels.setPixelColor(12, pixels.Color(R, G, B));
  pixels.setPixelColor(13, pixels.Color(R, G, B));
  pixels.setPixelColor(22, pixels.Color(R, G, B));
  pixels.setPixelColor(21, pixels.Color(R, G, B));
  pixels.setPixelColor(20, pixels.Color(R, G, B));
  pixels.setPixelColor(19, pixels.Color(R, G, B));
  pixels.setPixelColor(18, pixels.Color(R, G, B));
  pixels.setPixelColor(17, pixels.Color(R, G, B));
  pixels.setPixelColor(24, pixels.Color(R, G, B));
  pixels.setPixelColor(25, pixels.Color(R, G, B));
  pixels.setPixelColor(26, pixels.Color(R, G, B));
  pixels.setPixelColor(27, pixels.Color(R, G, B));
  pixels.setPixelColor(28, pixels.Color(R, G, B));
  pixels.setPixelColor(29, pixels.Color(R, G, B));
  pixels.setPixelColor(30, pixels.Color(R, G, B));
  pixels.setPixelColor(31, pixels.Color(R, G, B));

  pixels.setPixelColor(37, pixels.Color(R, G, B));
  pixels.setPixelColor(36, pixels.Color(R, G, B));
  pixels.setPixelColor(35, pixels.Color(R, G, B));
  pixels.setPixelColor(34, pixels.Color(R, G, B));
  pixels.setPixelColor(42, pixels.Color(R, G, B));
  pixels.setPixelColor(43, pixels.Color(R, G, B));
  pixels.setPixelColor(44, pixels.Color(R, G, B));
  pixels.setPixelColor(45, pixels.Color(R, G, B));
  pixels.setPixelColor(53, pixels.Color(R, G, B));
  pixels.setPixelColor(52, pixels.Color(R, G, B));
  pixels.setPixelColor(51, pixels.Color(R, G, B));
  pixels.setPixelColor(50, pixels.Color(R, G, B));
  pixels.setPixelColor(58, pixels.Color(R, G, B));
  pixels.setPixelColor(59, pixels.Color(R, G, B));
  pixels.setPixelColor(60, pixels.Color(R, G, B));
  pixels.setPixelColor(61, pixels.Color(R, G, B));
  pixels.show();   // Send the updated pixel colors to the hardware.
}

void left () {
  int R = 50;
  int G = 0;
  int B = 0;
  pixels.setPixelColor(60, pixels.Color(R, G, B));
  pixels.setPixelColor(59, pixels.Color(R, G, B));
  pixels.setPixelColor(50, pixels.Color(R, G, B));
  pixels.setPixelColor(51, pixels.Color(R, G, B));
  pixels.setPixelColor(52, pixels.Color(R, G, B));
  pixels.setPixelColor(53, pixels.Color(R, G, B));
  pixels.setPixelColor(41, pixels.Color(R, G, B));
  pixels.setPixelColor(42, pixels.Color(R, G, B));
  pixels.setPixelColor(43, pixels.Color(R, G, B));
  pixels.setPixelColor(44, pixels.Color(R, G, B));
  pixels.setPixelColor(45, pixels.Color(R, G, B));
  pixels.setPixelColor(46, pixels.Color(R, G, B));
  pixels.setPixelColor(32, pixels.Color(R, G, B));
  pixels.setPixelColor(33, pixels.Color(R, G, B));
  pixels.setPixelColor(34, pixels.Color(R, G, B));
  pixels.setPixelColor(35, pixels.Color(R, G, B));
  pixels.setPixelColor(36, pixels.Color(R, G, B));
  pixels.setPixelColor(37, pixels.Color(R, G, B));
  pixels.setPixelColor(38, pixels.Color(R, G, B));
  pixels.setPixelColor(39, pixels.Color(R, G, B));

  pixels.setPixelColor(26, pixels.Color(R, G, B));
  pixels.setPixelColor(27, pixels.Color(R, G, B));
  pixels.setPixelColor(28, pixels.Color(R, G, B));
  pixels.setPixelColor(29, pixels.Color(R, G, B));
  pixels.setPixelColor(18, pixels.Color(R, G, B));
  pixels.setPixelColor(19, pixels.Color(R, G, B));
  pixels.setPixelColor(20, pixels.Color(R, G, B));
  pixels.setPixelColor(21, pixels.Color(R, G, B));
  pixels.setPixelColor(10, pixels.Color(R, G, B));
  pixels.setPixelColor(11, pixels.Color(R, G, B));
  pixels.setPixelColor(12, pixels.Color(R, G, B));
  pixels.setPixelColor(13, pixels.Color(R, G, B));
  pixels.setPixelColor(2, pixels.Color(R, G, B));
  pixels.setPixelColor(3, pixels.Color(R, G, B));
  pixels.setPixelColor(4, pixels.Color(R, G, B));
  pixels.setPixelColor(5, pixels.Color(R, G, B));
  pixels.show();   // Send the updated pixel colors to the hardware.
}


void forward () {
  int R = 0;
  int G = 0;
  int B = 50;
  pixels.setPixelColor(39, pixels.Color(R, G, B));
  pixels.setPixelColor(24, pixels.Color(R, G, B));
  pixels.setPixelColor(41, pixels.Color(R, G, B));
  pixels.setPixelColor(38, pixels.Color(R, G, B));
  pixels.setPixelColor(25, pixels.Color(R, G, B));
  pixels.setPixelColor(22, pixels.Color(R, G, B));
  pixels.setPixelColor(53, pixels.Color(R, G, B));
  pixels.setPixelColor(42, pixels.Color(R, G, B));
  pixels.setPixelColor(37, pixels.Color(R, G, B));
  pixels.setPixelColor(26, pixels.Color(R, G, B));
  pixels.setPixelColor(21, pixels.Color(R, G, B));
  pixels.setPixelColor(10, pixels.Color(R, G, B));
  pixels.setPixelColor(59, pixels.Color(R, G, B));
  pixels.setPixelColor(52, pixels.Color(R, G, B));
  pixels.setPixelColor(43, pixels.Color(R, G, B));
  pixels.setPixelColor(36, pixels.Color(R, G, B));
  pixels.setPixelColor(27, pixels.Color(R, G, B));
  pixels.setPixelColor(20, pixels.Color(R, G, B));
  pixels.setPixelColor(11, pixels.Color(R, G, B));
  pixels.setPixelColor(4, pixels.Color(R, G, B));

  pixels.setPixelColor(44, pixels.Color(R, G, B));
  pixels.setPixelColor(35, pixels.Color(R, G, B));
  pixels.setPixelColor(28, pixels.Color(R, G, B));
  pixels.setPixelColor(19, pixels.Color(R, G, B));
  pixels.setPixelColor(45, pixels.Color(R, G, B));
  pixels.setPixelColor(34, pixels.Color(R, G, B));
  pixels.setPixelColor(29, pixels.Color(R, G, B));
  pixels.setPixelColor(18, pixels.Color(R, G, B));
  pixels.setPixelColor(46, pixels.Color(R, G, B));
  pixels.setPixelColor(33, pixels.Color(R, G, B));
  pixels.setPixelColor(30, pixels.Color(R, G, B));
  pixels.setPixelColor(17, pixels.Color(R, G, B));
  pixels.setPixelColor(47, pixels.Color(R, G, B));
  pixels.setPixelColor(32, pixels.Color(R, G, B));
  pixels.setPixelColor(31, pixels.Color(R, G, B));
  pixels.setPixelColor(16, pixels.Color(R, G, B));
  pixels.show();   // Send the updated pixel colors to the hardware.
}

void Stop () {
  int R = 80;
  int G = 30;
  int B = 50;
  pixels.setPixelColor(1, pixels.Color(R, G, B));
  pixels.setPixelColor(2, pixels.Color(R, G, B));
  pixels.setPixelColor(3, pixels.Color(R, G, B));
  pixels.setPixelColor(4, pixels.Color(R, G, B));
  pixels.setPixelColor(5, pixels.Color(R, G, B));
  pixels.setPixelColor(6, pixels.Color(R, G, B));
  pixels.setPixelColor(7, pixels.Color(R, G, B));
  pixels.setPixelColor(8, pixels.Color(R, G, B));
  pixels.setPixelColor(9, pixels.Color(R, G, B));
  pixels.setPixelColor(10, pixels.Color(R, G, B));
  pixels.setPixelColor(11, pixels.Color(R, G, B));
  pixels.setPixelColor(12, pixels.Color(R, G, B));
  pixels.setPixelColor(13, pixels.Color(R, G, B));
  pixels.setPixelColor(14, pixels.Color(R, G, B));
  pixels.setPixelColor(15, pixels.Color(R, G, B));
  pixels.setPixelColor(16, pixels.Color(R, G, B));
  pixels.setPixelColor(17, pixels.Color(R, G, B));
  pixels.setPixelColor(18, pixels.Color(R, G, B));
  pixels.setPixelColor(19, pixels.Color(R, G, B));
  pixels.setPixelColor(20, pixels.Color(R, G, B));

  pixels.setPixelColor(21, pixels.Color(R, G, B));
  pixels.setPixelColor(22, pixels.Color(R, G, B));
  pixels.setPixelColor(23, pixels.Color(R, G, B));
  pixels.setPixelColor(24, pixels.Color(R, G, B));
  pixels.setPixelColor(25, pixels.Color(R, G, B));
  pixels.setPixelColor(26, pixels.Color(R, G, B));
  pixels.setPixelColor(27, pixels.Color(R, G, B));
  pixels.setPixelColor(28, pixels.Color(R, G, B));
  pixels.setPixelColor(29, pixels.Color(R, G, B));
  pixels.setPixelColor(30, pixels.Color(R, G, B));
  pixels.setPixelColor(31, pixels.Color(R, G, B));
  pixels.setPixelColor(32, pixels.Color(R, G, B));
  pixels.setPixelColor(33, pixels.Color(R, G, B));
  pixels.setPixelColor(34, pixels.Color(R, G, B));
  pixels.setPixelColor(35, pixels.Color(R, G, B));
  pixels.setPixelColor(36, pixels.Color(R, G, B));
  pixels.setPixelColor(37, pixels.Color(R, G, B));
  pixels.setPixelColor(38, pixels.Color(R, G, B));
  pixels.setPixelColor(39, pixels.Color(R, G, B));
  pixels.setPixelColor(40, pixels.Color(R, G, B));
  pixels.setPixelColor(41, pixels.Color(R, G, B));
  pixels.setPixelColor(42, pixels.Color(R, G, B));
  pixels.setPixelColor(43, pixels.Color(R, G, B));
  pixels.setPixelColor(44, pixels.Color(R, G, B));
  pixels.setPixelColor(45, pixels.Color(R, G, B));
  pixels.setPixelColor(46, pixels.Color(R, G, B));
  pixels.setPixelColor(47, pixels.Color(R, G, B));
  pixels.setPixelColor(48, pixels.Color(R, G, B));
  pixels.setPixelColor(49, pixels.Color(R, G, B));
  pixels.setPixelColor(50, pixels.Color(R, G, B));
  pixels.setPixelColor(51, pixels.Color(R, G, B));
  pixels.setPixelColor(52, pixels.Color(R, G, B));
  pixels.setPixelColor(53, pixels.Color(R, G, B));
  pixels.setPixelColor(54, pixels.Color(R, G, B));
  pixels.setPixelColor(55, pixels.Color(R, G, B));
  pixels.setPixelColor(56, pixels.Color(R, G, B));
  pixels.setPixelColor(57, pixels.Color(R, G, B));
  pixels.setPixelColor(58, pixels.Color(R, G, B));
  pixels.setPixelColor(59, pixels.Color(R, G, B));
  pixels.setPixelColor(60, pixels.Color(R, G, B));
  pixels.setPixelColor(61, pixels.Color(R, G, B));
  pixels.setPixelColor(62, pixels.Color(R, G, B));
  pixels.setPixelColor(63, pixels.Color(R, G, B));
  pixels.setPixelColor(64, pixels.Color(R, G, B));
  pixels.setPixelColor(0, pixels.Color(R, G, B));
  pixels.show();   // Send the updated pixel colors to the hardware.
}
void startup () {
  int R = 10;
  int G = 5;
  int B = 50;
  pixels.setPixelColor(56, pixels.Color(R, G, B));
  pixels.setPixelColor(57, pixels.Color(R, G, B));
  pixels.setPixelColor(58, pixels.Color(R, G, B));
  pixels.setPixelColor(59, pixels.Color(R, G, B));
  pixels.setPixelColor(60, pixels.Color(R, G, B));
  pixels.setPixelColor(61, pixels.Color(R, G, B));
  pixels.setPixelColor(62, pixels.Color(R, G, B));
  pixels.setPixelColor(63, pixels.Color(R, G, B));
  pixels.setPixelColor(49, pixels.Color(R, G, B));
  pixels.setPixelColor(45, pixels.Color(R, G, B));
  pixels.setPixelColor(35, pixels.Color(R, G, B));
  pixels.setPixelColor(28, pixels.Color(R, G, B));
  pixels.setPixelColor(18, pixels.Color(R, G, B));
  pixels.setPixelColor(14, pixels.Color(R, G, B));
  pixels.setPixelColor(0, pixels.Color(R, G, B));
  pixels.setPixelColor(1, pixels.Color(R, G, B));
  pixels.setPixelColor(2, pixels.Color(R, G, B));
  pixels.setPixelColor(3, pixels.Color(R, G, B));
  pixels.setPixelColor(4, pixels.Color(R, G, B));
  pixels.setPixelColor(5, pixels.Color(R, G, B));
  pixels.setPixelColor(6, pixels.Color(R, G, B));
  pixels.setPixelColor(7, pixels.Color(R, G, B));
  pixels.show();   // Send the updated pixel colors to the hardware.
}


void loop() {
      startup ();
      delay (500);
    pixels.clear();
    
  if (Serial.available()) {
    char data = Serial.read();// data coming from bluetooth
    
    
    if (data == "turn right") {
      right();
      pixels.clear();
    }
    else if (data == "turn left"){
      left();
    pixels.clear();
  }
  else if (data == "forward"){
    forward();
  pixels.clear();
}
else if (data == "arrived at destination"){
  Stop();
delay(1000);
pixels.clear();
}
}
}
