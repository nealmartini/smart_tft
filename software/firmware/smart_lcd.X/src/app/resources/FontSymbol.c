
#include "resources.h"

const uint8_t FontSymbol[] = {
  2,  /*font type*/
  1, /*first car ID*/
  10, /*number of car*/
  14, /*font height*/
  /*index table: glyph width, offset hl, lh, ll*/
  0x0E, 0x00, 0x00, 0x00,
  0x0D, 0x00, 0x00, 0x63,
  0x0E, 0x00, 0x00, 0xBF,
  0x14, 0x00, 0x01, 0x22,
  0x10, 0x00, 0x01, 0xAF,
  0x0E, 0x00, 0x02, 0x20,
  0x09, 0x00, 0x02, 0x83,
  0x09, 0x00, 0x02, 0xC3,
  0x0C, 0x00, 0x03, 0x03,
  0x10, 0x00, 0x03, 0x58,
  /*glyph raw*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x04, 0xCD, 0x53, 0x33, 0x33, 0x33, 0x30, 0x39, 0xFF, 0xBA, 0xAA, 0xAA, 0xAA, 0x93, 0x04, 0xCD, 0x53, 0x33,
  0x33, 0x33, 0x30, 0x01, 0x49, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x31, 0x30, 0x00, 0x00, 0x49,
  0x94, 0x39, 0x59, 0x30, 0x00, 0x39, 0x55, 0x95, 0xA6, 0xA3, 0x00, 0x03, 0xB5, 0x5B, 0x6A, 0x6B, 0x50, 0x00, 0x3C, 0xBB,
  0xC6, 0xA6, 0xC9, 0x30, 0x03, 0xB5, 0x5B, 0x6A, 0x6B, 0x50, 0x00, 0x3A, 0x33, 0xA6, 0xA5, 0x94, 0x13, 0x03, 0x93, 0x39,
  0x59, 0x34, 0x84, 0x73, 0x03, 0x00, 0x31, 0x30, 0x03, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4B, 0xB3, 0x00, 0x00, 0x00, 0x00, 0x04, 0xCF, 0xB3, 0x00,
  0x00, 0x00, 0x00, 0x3B, 0xFD, 0x51, 0x03, 0x33, 0x00, 0x00, 0x5D, 0xFB, 0x30, 0x3B, 0xDB, 0x40, 0x03, 0xBF, 0xD5, 0x10,
  0x3D, 0xFF, 0xC4, 0x15, 0xDF, 0xB3, 0x00, 0x3B, 0xFF, 0xFC, 0x7C, 0xFD, 0x51, 0x00, 0x04, 0xCF, 0xFF, 0xDF, 0xFB, 0x30,
  0x00, 0x01, 0x4C, 0xFF, 0xFF, 0xD5, 0x10, 0x00, 0x00, 0x14, 0xCF, 0xFF, 0xB3, 0x00, 0x00, 0x00, 0x01, 0x4B, 0xDB, 0x41,
  0x00, 0x00, 0x00, 0x00, 0x13, 0x33, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xBB, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x4C, 0xFF, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xCF, 0xFF, 0xFC, 0x40, 0x00, 0x00, 0x33, 0x00,
  0x00, 0x4C, 0xFF, 0xFF, 0xFF, 0xC4, 0x00, 0x04, 0x99, 0x40, 0x04, 0xCF, 0xFF, 0xFF, 0xFF, 0xFC, 0x40, 0x39, 0x55, 0x93,
  0x39, 0xDD, 0xFF, 0xFF, 0xFF, 0xDD, 0x93, 0x3B, 0x55, 0xB3, 0x03, 0x35, 0xDF, 0xFF, 0xFD, 0x53, 0x30, 0x3D, 0xDC, 0xC3,
  0x00, 0x03, 0xDF, 0xFF, 0xFD, 0x30, 0x00, 0x3D, 0xC8, 0xB3, 0x00, 0x03, 0xDF, 0xFF, 0xFD, 0x30, 0x00, 0x3B, 0x8C, 0xD3,
  0x00, 0x03, 0xDF, 0xFF, 0xFD, 0x30, 0x00, 0x3A, 0xBD, 0xB3, 0x00, 0x03, 0xBD, 0xDD, 0xDB, 0x30, 0x00, 0x03, 0x33, 0x30,
  0x00, 0x00, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x33, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3A, 0xBA, 0x93, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x53, 0x31, 0x33, 0x00, 0x03, 0x30, 0x00, 0x3B,
  0x53, 0x14, 0x99, 0x30, 0x49, 0x93, 0x00, 0x3C, 0xB9, 0x48, 0x65, 0x13, 0x95, 0x30, 0x00, 0x3B, 0x53, 0x14, 0x99, 0x43,
  0xA3, 0x00, 0x00, 0x3B, 0x53, 0x31, 0x56, 0x84, 0x95, 0x31, 0x30, 0x3A, 0xBA, 0x94, 0x99, 0x41, 0x49, 0x94, 0x73, 0x03,
  0x33, 0x31, 0x33, 0x00, 0x03, 0x31, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0xBB, 0x40, 0x00, 0x00, 0x00, 0x00, 0x4C, 0xFF, 0xC4, 0x00, 0x00, 0x00, 0x04, 0xCF, 0xFF, 0xFC, 0x40, 0x00, 0x00,
  0x4C, 0xFF, 0xFF, 0xFF, 0xC4, 0x00, 0x04, 0xCF, 0xFF, 0xFF, 0xFF, 0xFC, 0x40, 0x39, 0xDD, 0xFF, 0xFF, 0xFF, 0xDD, 0x93,
  0x03, 0x35, 0xDF, 0xFF, 0xFD, 0x53, 0x30, 0x00, 0x03, 0xDF, 0xFF, 0xFD, 0x30, 0x00, 0x00, 0x03, 0xDF, 0xFF, 0xFD, 0x30,
  0x00, 0x00, 0x03, 0xDF, 0xFF, 0xFD, 0x30, 0x00, 0x00, 0x03, 0xBD, 0xDD, 0xDB, 0x30, 0x00, 0x00, 0x00, 0x33, 0x33, 0x33,
  0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x00, 0x39, 0x30, 0x39, 0x30, 0x03, 0xA3, 0x03, 0xA3, 0x00, 0x39, 0x41, 0x49,
  0x30, 0x00, 0x49, 0x59, 0x40, 0x00, 0x03, 0x97, 0x93, 0x00, 0x00, 0x16, 0x96, 0x10, 0x00, 0x04, 0x97, 0x94, 0x00, 0x04,
  0xAC, 0x6C, 0xA4, 0x03, 0x97, 0xB6, 0xB7, 0x93, 0x3A, 0x6A, 0x6A, 0x6A, 0x33, 0x97, 0x95, 0x97, 0x93, 0x04, 0x84, 0x14,
  0x84, 0x10, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x30, 0x00, 0x3A, 0xBA, 0xA9, 0x40,
  0x03, 0xB5, 0x33, 0x48, 0x40, 0x3A, 0x31, 0x11, 0x49, 0x33, 0xA3, 0x11, 0x13, 0xA3, 0x3A, 0x31, 0x11, 0x3A, 0x33, 0xA3,
  0x11, 0x13, 0xA3, 0x3A, 0x31, 0x11, 0x3A, 0x33, 0xB5, 0x33, 0x35, 0xB3, 0x3A, 0xBA, 0xAA, 0xBA, 0x30, 0x33, 0x33, 0x33,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x33, 0x33, 0x00, 0x00, 0x00, 0x3A, 0xBA, 0xA9,
  0x40, 0x00, 0x00, 0x3B, 0x53, 0x57, 0xA5, 0x30, 0x00, 0x3A, 0x33, 0xAB, 0xCB, 0x94, 0x00, 0x3A, 0x33, 0xB5, 0x33, 0x48,
  0x40, 0x3A, 0x33, 0xA3, 0x11, 0x14, 0x93, 0x3A, 0x33, 0xA3, 0x11, 0x13, 0xA3, 0x3A, 0x33, 0xA3, 0x11, 0x13, 0xA3, 0x3B,
  0x55, 0xB3, 0x11, 0x13, 0xA3, 0x3A, 0xBB, 0xC3, 0x11, 0x13, 0xA3, 0x13, 0x35, 0xB5, 0x33, 0x35, 0xB3, 0x00, 0x03, 0xAB,
  0xAA, 0xAB, 0xA3, 0x00, 0x00, 0x33, 0x33, 0x33, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x33, 0x33, 0x00, 0x33, 0x00, 0x33, 0x30, 0x39, 0xBC, 0xB9, 0x34, 0x99, 0x43, 0xAB, 0x94, 0x03, 0x5B, 0x53, 0x39,
  0x55, 0x95, 0xB5, 0x59, 0x00, 0x3A, 0x30, 0x3B, 0x55, 0xB6, 0xB5, 0x59, 0x00, 0x3A, 0x30, 0x3C, 0xBB, 0xC6, 0xCB, 0x96,
  0x00, 0x3A, 0x30, 0x3B, 0x55, 0xB6, 0xB5, 0x59, 0x00, 0x3A, 0x30, 0x3A, 0x33, 0xA6, 0xB5, 0x59, 0x00, 0x39, 0x30, 0x39,
  0x33, 0x95, 0xAB, 0x94, 0x00, 0x03, 0x00, 0x03, 0x00, 0x30, 0x33, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};