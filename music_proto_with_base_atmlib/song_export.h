#ifndef SONG_H
#define SONG_H

#define Song const uint8_t PROGMEM

Song music[] = {
0x05,     // Number of tracks
0x00, 0x00,   // Address of track 0
0x07, 0x00,   // Address of track 1
0x08, 0x00,   // Address of track 2
0x09, 0x00,   // Address of track 3
0x0a, 0x00,   // Address of track 4
0x00,     // Channel 0 entry track
0x01,     // Channel 1 entry track
0x02,     // Channel 2 entry track
0x03,     // Channel 3 entry track
//"Track channel 0"
0x40, 64,   // FX: SET VOLUME: volume = 64
0x9D, 10,   // FX: SET TEMPO: tempo = 10
0xFC, 4,    // GOTO track 4
0x9F,     // FX: STOP CURRENT CHANNEL
//"Track channel 1"
0x9F,     // FX: STOP CURRENT CHANNEL
//"Track channel 2"
0x9F,     // FX: STOP CURRENT CHANNEL
//"Track channel 3"
0x9F,     // FX: STOP CURRENT CHANNEL
//"Track Track 1"
0x00 + 26,    // NOTE ON: note = 26
0x9F + 2,   // DELAY: ticks = 2
0x00 + 28,    // NOTE ON: note = 28
0x9F + 2,   // DELAY: ticks = 2
0x00 + 30,    // NOTE ON: note = 30
0x9F + 2,   // DELAY: ticks = 2
0x00 + 31,    // NOTE ON: note = 31
0x9F + 2,   // DELAY: ticks = 2
0xFE,     // RETURN

};



#endif

