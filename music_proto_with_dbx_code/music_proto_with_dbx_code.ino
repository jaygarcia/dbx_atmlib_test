#include <Arduboy2.h>
#include "ATMlib.h"
#include "song_export.h"


Arduboy2 arduboy;
ATMsynth ATM;
long x;

void setup() {
  x = 0;
  arduboy.boot(); // raw hardware

  arduboy.blank(); // blank the display

  arduboy.flashlight(); // light the RGB LED and screen if UP button is being held.

  // check for and handle buttons held during start up for system control
  arduboy.systemButtons();

  arduboy.audio.on();

  ATM.play(music);
  // wait for all buttons to be released

}

// put your main code here, to run repeatedly:
void loop() {
  if (!(arduboy.nextFrame())) return;

  x++;
  arduboy.clear();
  arduboy.pollButtons();

  if (arduboy.justPressed(B_BUTTON)) ATM.playPause();
  if (arduboy.justPressed(A_BUTTON)) ATM.playPause();
  
  arduboy.setCursor(0,0);
  arduboy.print(x);
  if (x > 1000) {
//    ATM.stop();
//    ATM.play(music);
  }

  if (x > 1200) {
//    ATM.play(music);
  }
  
  arduboy.display();

}
