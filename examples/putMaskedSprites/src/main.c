//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of CPCtelera: An Amstrad CPC Game Engine
//  Copyright (C) 2014 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//------------------------------------------------------------------------------

#include <cpctelera_all.h>

// Charlie's sprite
// Original author: Pote / Cheesetea
// Taken from the game "Save The Humor"
const char G_charlie_sprite[128] = {
 0xAA, 0x40, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
 0xAA, 0x40, 0x00, 0xC0, 0x00, 0xC0, 0xFF, 0x00,
 0xFF, 0x00, 0x00, 0xC0, 0x00, 0xC0, 0x55, 0x80,
 0xFF, 0x00, 0x00, 0xF3, 0x00, 0xF3, 0x55, 0x80,
 0xFF, 0x00, 0x00, 0xD1, 0x00, 0xD1, 0x55, 0x80,
 0xFF, 0x00, 0x00, 0x73, 0x00, 0x73, 0x55, 0xA2,
 0xAA, 0x51, 0x00, 0xF3, 0x00, 0xF3, 0x55, 0xA2,
 0xFF, 0x00, 0x00, 0xF3, 0x00, 0xF3, 0x55, 0x80,
 0xFF, 0x00, 0x00, 0xE6, 0x00, 0xF3, 0xFF, 0x00,
 0xFF, 0x00, 0xFF, 0x00, 0x55, 0xA2, 0xFF, 0x00,
 0xFF, 0x00, 0x00, 0xCC, 0x00, 0xCC, 0x55, 0x88,
 0xFF, 0x00, 0x00, 0xCC, 0x00, 0xCC, 0x55, 0x88,
 0xFF, 0x00, 0x00, 0xCC, 0x00, 0xCC, 0x55, 0x88,
 0xFF, 0x00, 0x00, 0xA2, 0x00, 0x00, 0x55, 0xA2,
 0xFF, 0x00, 0xAA, 0x00, 0xAA, 0x00, 0xFF, 0x00,
 0xFF, 0x00, 0x00, 0xF0, 0xAA, 0x50, 0x55, 0xA0
};

// Newton's sprite taken from OpenGameArt (http://opengameart.org/content/newton)
// Original author: devnewton
// Shared as CC-BY-SA 3.0
const char G_newton_sprite[512] = {
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x50, 0xF0, 0xF0, 0x30, 0x70, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0xB0, 0x35, 0x3A, 0x30, 0x3F, 0x30, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x50, 0x30, 0x3F, 0x3F, 0x35, 0x3F, 0x3A, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0xB0, 0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0xB0, 0x3A, 0xA0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0xB0, 0x35, 0xE5, 0xCF, 0xCF, 0xCF, 0x9F, 0x30, 0xA0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0xB0, 0x3F, 0xCF, 0xCF, 0xCF, 0xCF, 0x9F, 0x3A, 0xA0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0xB0, 0x3F, 0x9A, 0x65, 0xCF, 0x30, 0x9F, 0x3A, 0xA0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0xB0, 0x3F, 0x9A, 0xE5, 0xCF, 0x70, 0x9F, 0x35, 0xA0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0xB0, 0x7A, 0x9A, 0xE5, 0xE5, 0x70, 0xDA, 0x35, 0xA0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x50, 0x35, 0x70, 0xCF, 0xCF, 0xE5, 0xCF, 0xCF, 0xB0, 0x7A, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x50, 0x35, 0x35, 0xCF, 0xCF, 0xDA, 0xCF, 0xCF, 0x3A, 0x7A, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0xB0, 0x3A, 0x3F, 0xCF, 0xCF, 0xCF, 0xE5, 0xCF, 0x3F, 0x30, 0xA0, 0x00, 0x00, 0x00,
 0x00, 0x00, 0xB5, 0x30, 0x3F, 0xCF, 0xCF, 0xF0, 0xCF, 0xDA, 0x3F, 0x35, 0xA0, 0x41, 0x82, 0x00,
 0x00, 0x00, 0x50, 0xB0, 0x35, 0xE5, 0xCF, 0xCF, 0xCF, 0xDA, 0x3A, 0x70, 0x50, 0xC7, 0xCB, 0x00,
 0x00, 0x00, 0x00, 0x50, 0x30, 0xE1, 0xCF, 0xCB, 0xCF, 0x7A, 0xF0, 0xA0, 0xB0, 0xE5, 0xCB, 0x00,
 0x00, 0x00, 0x00, 0xE1, 0xF0, 0xE1, 0xB5, 0x9F, 0x9F, 0xE1, 0xE1, 0xF0, 0xF0, 0x70, 0x82, 0x00,
 0x00, 0x00, 0x50, 0x97, 0xC7, 0xE1, 0x7A, 0xE1, 0xF0, 0xCB, 0xE1, 0xCF, 0xC3, 0xA0, 0x00, 0x00,
 0x00, 0x00, 0xE1, 0x6B, 0xDA, 0xE1, 0x6B, 0x92, 0xC3, 0xCB, 0xE1, 0xC3, 0xD2, 0x00, 0x00, 0x00,
 0x00, 0x00, 0xE1, 0x6B, 0xDA, 0xE1, 0x6B, 0xC3, 0xC1, 0xC7, 0xD2, 0x3F, 0xA0, 0x00, 0x00, 0x00,
 0x00, 0x00, 0xE1, 0xC3, 0xE1, 0x70, 0xC3, 0xC2, 0xC3, 0xC7, 0xD2, 0xF0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x50, 0xF0, 0x92, 0xE5, 0xCB, 0xC3, 0xC1, 0xC3, 0xCB, 0xA0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x50, 0xF0, 0xCF, 0xCB, 0xD2, 0xE1, 0xC3, 0xCB, 0xA0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0xD2, 0xE1, 0xD2, 0xF0, 0xF0, 0xA0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0xC3, 0xC3, 0xC3, 0xC3, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xC3, 0xC3, 0xC3, 0xE1, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0xF0, 0xE1, 0xC3, 0xF0, 0x00, 0x50, 0xA0, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x3A, 0x30, 0x70, 0xF0, 0x30, 0x2A, 0xE0, 0xA0, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0xB5, 0x30, 0x30, 0x2A, 0x3A, 0x30, 0x70, 0x3F, 0xA0, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x50, 0xF0, 0xB5, 0x3F, 0x00, 0x15, 0x3A, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x50, 0xF0, 0xF0, 0xD0, 0x00, 0x00, 0x50, 0xF0, 0xA0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

void main(void) {
   unsigned char x=0, y=0;
   char*dest = (char*)0xC000;

   cpct_disableFirmware();
   cpct_setVideoMode(0);

   // Make a background full of Newtons
   for (x=0; x < 5; x++) {
      for(y=0; y < 6; y++) {
         cpct_drawSprite(G_newton_sprite, dest + 80*4*y + 16*x, 16, 32);
      }
   }

   // Let us move Charlie
   while(1) {
      cpct_scanKeyboardFast();
      if      (cpct_isKeyPressed(Key_CursorRight) && x < 64 ) { x++; dest++; }
      else if (cpct_isKeyPressed(Key_CursorLeft)  && x > 0  ) { x--; dest--; }
      if      (cpct_isKeyPressed(Key_CursorUp)    && y > 0  ) { dest -= (y-- & 7) ? 0x0800 : 0xC850; }
      else if (cpct_isKeyPressed(Key_CursorDown)  && y < 168) { dest += (++y & 7) ? 0x0800 : 0xC850; }

      cpct_drawMaskedSprite(G_charlie_sprite, dest, 4, 16);
   }
}