// This is the 'classic' fixed-space bitmap font for Adafruit_GFX since 1.0.
// See gfxfont.h for newer custom bitmap font info.

#ifndef FONT5X7_H
#define FONT5X7_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#elif defined(ESP8266)
 #include <pgmspace.h>
#else
 #define PROGMEM
#endif

// Backwards ASCII 9x7 font

static const unsigned char font[] PROGMEM = {
  0x00, 0xFE, 0xBC, 0xFC, 0xE2, 0xBE, 0xAF, 0x94, 0xA0, 0x23, 0xBE, 0x64,
  0x52, 0xEE, 0x20, 0x4E, 0x29, 0x16, 0x12, 0xE8, 0xA8, 0xE4, 0x39, 0x23,
  0x86, 0xE5, 0x1B, 0x80, 0xF0, 0x95, 0x55, 0x80, 0x5A, 0xA9, 0x40, 0x5E,
  0x80, 0x21, 0x3E, 0x42, 0x00, 0xC0, 0xE0, 0xC0, 0x92, 0x24, 0x88, 0x74,
  0x63, 0x18, 0xC5, 0xC0, 0x9A, 0xC9, 0x20, 0x74, 0xA0, 0x82, 0x0B, 0xE0,
  0x74, 0xA2, 0xC8, 0x45, 0xC0, 0x43, 0x18, 0xA4, 0xF9, 0x00, 0xF0, 0x85,
  0xE8, 0xC5, 0xC0, 0x74, 0x83, 0xF8, 0xC9, 0xC0, 0xFA, 0x10, 0x42, 0x10,
  0x40, 0x64, 0xA4, 0xE8, 0xC5, 0xC0, 0x74, 0x63, 0x2E, 0x49, 0xC0, 0xF3,
  0xC0, 0x8C, 0x83, 0x06, 0xE8, 0x00, 0xF8, 0x3E, 0x0B, 0xA0, 0xC1, 0x80,
  0x74, 0xA2, 0x82, 0x00, 0x80, 0x3E, 0x21, 0xA8, 0x73, 0x99, 0x4A, 0xA5,
  0xB3, 0x02, 0x7E, 0x00, 0x10, 0x60, 0xA2, 0x47, 0xC8, 0xA1, 0x80, 0x7C,
  0x62, 0xF8, 0xC5, 0xE0, 0x7A, 0x10, 0x41, 0x06, 0x17, 0x80, 0x7E, 0x18,
  0x61, 0x87, 0x17, 0xC0, 0xF8, 0x43, 0xF0, 0x87, 0xE0, 0xF8, 0x42, 0xF0,
  0x84, 0x20, 0x7A, 0x10, 0x79, 0x86, 0x17, 0x80, 0xCF, 0x3C, 0xFF, 0xCF,
  0x3C, 0xC0, 0xFF, 0xFC, 0x88, 0x88, 0x89, 0x60, 0xC4, 0x91, 0x47, 0x25,
  0x1C, 0x40, 0x11, 0x11, 0x11, 0xF0, 0xC7, 0x8F, 0xAD, 0x5A, 0xB6, 0x64,
  0x80, 0x8E, 0x39, 0x69, 0xA7, 0x18, 0x40, 0x38, 0xDB, 0x1E, 0x3C, 0x6D,
  0x8E, 0x00, 0x7C, 0x62, 0xF0, 0x84, 0x20, 0x38, 0x8A, 0x0C, 0x18, 0x3C,
  0x9F, 0x40, 0x7D, 0x14, 0x5F, 0x25, 0x18, 0x40, 0x7A, 0x20, 0x9C, 0x82,
  0x37, 0x80, 0xFC, 0xC3, 0x0C, 0x30, 0xC3, 0x00, 0x8E, 0x38, 0xE3, 0x8E,
  0x37, 0x80, 0x86, 0x14, 0x92, 0x48, 0xC1, 0x00, 0x88, 0xC6, 0x55, 0x4A,
  0xA5, 0x51, 0x30, 0x88, 0xC5, 0xA3, 0x04, 0x39, 0x2C, 0x40, 0xC5, 0x32,
  0x84, 0x10, 0x41, 0x00, 0xF9, 0x06, 0x08, 0x10, 0x2F, 0xC0, 0xD5, 0x55,
  0xC0, 0x92, 0x24, 0x88, 0xEA, 0xAA, 0xC0, 0x66, 0xA9, 0xFC, 0xC0, 0x74,
  0x7D, 0x1F, 0x00, 0x11, 0x79, 0x99, 0x70, 0x79, 0x19, 0x70, 0x88, 0xF9,
  0x99, 0xF0, 0x74, 0xDF, 0x37, 0x00, 0xC9, 0x74, 0x90, 0xF9, 0x99, 0xE9,
  0x70, 0x11, 0xF9, 0x99, 0x90, 0xFE, 0x82, 0xAA, 0xC0, 0x11, 0xD3, 0x35,
  0x90, 0xFE, 0xFF, 0x26, 0x4C, 0x99, 0x20, 0xF9, 0x99, 0x90, 0x74, 0x63,
  0x17, 0x00, 0x79, 0x99, 0x71, 0x10, 0xF9, 0x99, 0xF8, 0x80, 0xE4, 0x92,
  0x79, 0xE9, 0xF0, 0x5D, 0x5C, 0x99, 0x99, 0xF0, 0x9A, 0x94, 0xC2, 0x00,
  0x93, 0x29, 0xB3, 0x62, 0xC0, 0xDA, 0x88, 0xAD, 0x80, 0x9C, 0x94, 0xC2,
  0x10, 0x40, 0xF2, 0x08, 0x2F, 0x80, 0xF9, 0x99, 0x99, 0x9F, 0xF9, 0x99,
  0x99, 0x9F, 0xF9, 0x99, 0x99, 0x9F, 0xF9, 0x99, 0x99, 0x9F };
#endif // FONT5X7_H
