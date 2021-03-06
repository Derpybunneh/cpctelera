//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of CPCtelera: An Amstrad CPC Game Engine 
//  Copyright (C) 2015 Dardalorth / Fremos / Carlio
//  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
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

#include <types.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
///////////
/////////// PALETTE AND SPRITE DEFINITIONS
///////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

// Selected firmware colors from the video palette to be used with the sprite
const u8 gc_palette[16] = {
   0x0D, 0x0F, 0x03, 0x18, 0x01, 0x14, 0x06, 0x1A,
   0x00, 0x02, 0x0B, 0x12, 0x08, 0x05, 0x10, 0x09
};

// Fremos Logo Sprite by Dardalorth / Fremos / Carlio
const u8 gc_LogoFremos[55*20] = {
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x4C,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0x8C,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x48,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x84,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0xC0,0xC0,0xC0,
   0xC0,0xC0,0xC0,0x84,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x48,0xC0,0x84,0x0C,0x0C,0x48,0x84,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x48,0xC0,0x84,0x4C,0x8C,0x48,0x84,0x4C,0xCC,0x8C,0x4C,0xCC,0xCC,
   0x8C,0x00,0x00,0x00,0x00,0x4C,0xCC,0xCC,0xCC,0x8C,0x00,0x00,0x4C,0xCC,0x8C,
   0x4C,0xCC,0x8C,0x00,0x00,0x00,0x00,0x4C,0xCC,0xCC,0xCC,0x8C,0x00,0x00,0x00,
   0x00,0x4C,0xCC,0xCC,0xCC,0xCC,0x8C,0x00,0x00,0x00,0x00,0x00,0x48,0xC0,0x84,
   0x48,0x84,0x0C,0x0C,0x48,0xC0,0x84,0x48,0xC0,0xC0,0x84,0x00,0x00,0x00,0x00,
   0x48,0xC0,0xC0,0xC0,0x84,0x00,0x00,0x48,0xC0,0x84,0x48,0xC0,0x84,0x00,0x00,
   0x00,0x00,0x48,0xC0,0xC0,0xC0,0x84,0x00,0x00,0x00,0x00,0x48,0xC0,0xC0,0xC0,
   0xC0,0x84,0x00,0x00,0x00,0x00,0x00,0x48,0xC0,0xC4,0xC8,0x84,0x00,0x00,0x48,
   0xC0,0xC4,0xC8,0xC0,0xC0,0xC4,0x8C,0x00,0x00,0x4C,0xC8,0xC0,0xC0,0xC0,0xC4,
   0x8C,0x4C,0xC8,0xC0,0xC4,0xC8,0xC0,0xC4,0x8C,0x00,0x00,0x4C,0xC8,0xC0,0xC0,
   0xC0,0xC4,0x8C,0x00,0x00,0x4C,0xC8,0xC0,0xC0,0xC0,0xC0,0x84,0x00,0x00,0x00,
   0x00,0x00,0x48,0xC0,0xC0,0xC0,0x84,0x00,0x00,0x0C,0x48,0xC0,0xC0,0x84,0x48,
   0xC0,0x84,0x00,0x00,0x48,0xC0,0x84,0x0C,0x48,0xC0,0x84,0x48,0xC0,0xC0,0xC0,
   0xC0,0xC0,0xC0,0x84,0x00,0x00,0x48,0xC0,0x84,0x0C,0x48,0xC0,0x84,0x00,0x00,
   0x48,0xC0,0x84,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x48,0xC0,0xC0,
   0xC0,0x84,0x00,0x00,0x00,0x48,0xC0,0xC0,0x84,0x48,0xC0,0x84,0x00,0x00,0x48,
   0xC0,0xC4,0xCC,0xC8,0xC0,0x84,0x48,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x84,0x00,
   0x00,0x48,0xC0,0x84,0x00,0x48,0xC0,0x84,0x00,0x00,0x48,0xC0,0xC4,0xCC,0xCC,
   0xCC,0x8C,0x00,0x00,0x00,0x00,0x00,0x48,0xC0,0x84,0x48,0x84,0x00,0x00,0x00,
   0x48,0xC0,0x84,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x48,0xC0,0xC0,0xC0,0xC0,0xC0,
   0x84,0x48,0xC0,0x84,0x48,0x84,0x48,0xC0,0x84,0x00,0x00,0x48,0xC0,0x84,0x00,
   0x48,0xC0,0x84,0x00,0x00,0x0C,0x48,0xC0,0xC0,0xC0,0xC0,0x84,0x00,0x00,0x00,
   0x00,0x00,0x48,0xC0,0x84,0x48,0x84,0x00,0x00,0x00,0x48,0xC0,0x84,0x00,0x00,
   0x00,0x00,0x00,0x00,0x48,0xC0,0xC0,0xC0,0xC0,0xC0,0x84,0x48,0xC0,0x84,0x48,
   0x84,0x48,0xC0,0x84,0x00,0x00,0x48,0xC0,0x84,0x00,0x48,0xC0,0x84,0x00,0x00,
   0x00,0x48,0xC0,0xC0,0xC0,0xC0,0xC4,0x8C,0x00,0x00,0x00,0x00,0x48,0xC0,0x84,
   0x0C,0x0C,0x00,0x00,0x00,0x48,0xC0,0x84,0x00,0x00,0x00,0x00,0x00,0x00,0x48,
   0xC0,0x84,0x0C,0x0C,0x0C,0x0C,0x48,0xC0,0x84,0x48,0x84,0x48,0xC0,0x84,0x00,
   0x00,0x48,0xC0,0x84,0x00,0x48,0xC0,0x84,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x0C,
   0x48,0xC0,0x84,0x00,0x00,0x00,0x4C,0xC8,0xC0,0xC4,0x8C,0x00,0x00,0x00,0x4C,
   0xC8,0xC0,0xC4,0x8C,0x00,0x00,0x00,0x00,0x00,0x48,0xC0,0xC4,0xCC,0xCC,0x8C,
   0x00,0x48,0xC0,0x84,0x48,0x84,0x48,0xC0,0x84,0x00,0x00,0x48,0xC0,0xC4,0xCC,
   0xC8,0xC0,0x84,0x00,0x00,0x4C,0xCC,0xCC,0xCC,0xCC,0xC8,0xC0,0x84,0x00,0x00,
   0x00,0x48,0xC0,0xC0,0xC0,0x84,0x00,0x00,0x00,0x48,0xC0,0xC0,0xC0,0x84,0x00,
   0x00,0x00,0x00,0x00,0x0C,0x48,0xC0,0xC0,0xC0,0x84,0x00,0x48,0xC0,0x84,0x0C,
   0x0C,0x48,0xC0,0x84,0x00,0x00,0x0C,0x48,0xC0,0xC0,0xC0,0x84,0x0C,0x00,0x00,
   0x48,0xC0,0xC0,0xC0,0xC0,0xC0,0x84,0x0C,0x00,0x00,0x00,0x48,0xC0,0xC0,0xC0,
   0x84,0x00,0x00,0x00,0x48,0xC0,0xC0,0xC0,0x84,0x00,0x00,0x00,0x00,0x00,0x00,
   0x48,0xC0,0xC0,0xC0,0x84,0x00,0x48,0xC0,0x84,0x00,0x00,0x48,0xC0,0x84,0x00,
   0x00,0x00,0x48,0xC0,0xC0,0xC0,0x84,0x00,0x00,0x00,0x48,0xC0,0xC0,0xC0,0xC0,
   0xC0,0x84,0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x0C,
   0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x0C,0x0C,
   0x00,0x0C,0x0C,0x0C,0x00,0x00,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x0C,0x0C,0x0C,
   0x0C,0x0C,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00
};

// Persea walking 1 and 3 by Dardalorth / Fremos / Carlio
const u8 gc_PerseaWalk13[8*24] = {
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0xCC,0x00,0x00,0x00,
   0x00,0x00,0x44,0xCC,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x44,0xCC,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x00,0x9D,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x44,0x9D,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x45,0x9F,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x45,0x9F,0x6F,0x00,0x00,0x00,
   0x00,0x00,0x45,0x9F,0x6F,0x8A,0x00,0x00,
   0x00,0x00,0x00,0x9F,0x6F,0x00,0x00,0x00,
   0x00,0x00,0x00,0x9F,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x55,0xEE,0x88,0x00,0x00,0x00,
   0x00,0x00,0x55,0x17,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x00,0x17,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x00,0x2B,0x02,0x00,0x00,0x00,
   0x00,0x00,0x00,0x3F,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x00,0x15,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x00,0x15,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x00,0x15,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x00,0x44,0x88,0x00,0x00,0x00,
   0x00,0x00,0x00,0x45,0x8A,0x00,0x00,0x00,
   0x00,0x00,0x00,0x45,0xCF,0x00,0x00,0x00
};
// Persea walking 2 by Dardalorth / Fremos / Carlio
const u8 gc_PerseaWalk2[8*24] = {
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0xCC,0x00,0x00,0x00,
   0x00,0x00,0x44,0xCC,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x44,0xCC,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x00,0x9D,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x44,0x9D,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x15,0x3F,0x8A,0x00,0x00,0x00,
   0x00,0x00,0x3F,0x3F,0xCF,0x00,0x00,0x00,
   0x00,0x15,0x3F,0xCF,0xCF,0x8A,0x00,0x00,
   0x00,0x3F,0x2A,0xCF,0xCF,0x6E,0x3F,0x00,
   0x00,0x3F,0x00,0xCF,0x9F,0x6E,0x3F,0x00,
   0x00,0xCC,0x55,0xFF,0xAA,0x00,0x00,0x00,
   0x00,0x3F,0x55,0x3F,0x2A,0x00,0x00,0x00,
   0x00,0x3F,0x00,0x3F,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x01,0x17,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x15,0x03,0x3F,0x2A,0x00,0x00,
   0x00,0x00,0x3F,0x2A,0x15,0x2A,0x00,0x00,
   0x00,0x15,0x3F,0x00,0x15,0x3F,0x00,0x00,
   0x00,0x3F,0x2A,0x00,0x00,0x3F,0x00,0x00,
   0x44,0x9D,0x00,0x00,0x00,0xCC,0x00,0x00,
   0x45,0x8A,0x00,0x00,0x00,0xCF,0x00,0x00,
   0x00,0xCF,0x00,0x00,0x00,0xCF,0x8A,0x00
};
// Persea walking 4 by Dardalorth / Fremos / Carlio
const u8 gc_PerseaWalk4[8*24] = {
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0xCC,0x00,0x00,0x00,
   0x00,0x00,0x44,0xCC,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x44,0xCC,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x00,0x9D,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x44,0x9D,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x45,0x9F,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x6F,0x9F,0x3F,0x00,0x00,0x00,
   0x00,0x15,0x6F,0xCF,0x3F,0x2A,0x00,0x00,
   0x00,0x3F,0x2A,0xCF,0x9F,0x6E,0x3F,0x00,
   0x00,0x3F,0x00,0xCF,0x8A,0x6E,0x3F,0x00,
   0x00,0xCC,0x55,0xFF,0xAA,0x00,0x00,0x00,
   0x00,0x3F,0x55,0x3F,0x2A,0x00,0x00,0x00,
   0x00,0x3F,0x00,0x3F,0x2B,0x00,0x00,0x00,
   0x00,0x00,0x15,0x3F,0x2B,0x00,0x00,0x00,
   0x00,0x00,0x15,0x3F,0x17,0x2A,0x00,0x00,
   0x00,0x00,0x3F,0x2A,0x15,0x2A,0x00,0x00,
   0x00,0x15,0x3F,0x00,0x15,0x3F,0x00,0x00,
   0x00,0x3F,0x2A,0x00,0x00,0x3F,0x00,0x00,
   0x44,0x9D,0x00,0x00,0x00,0xCC,0x00,0x00,
   0x45,0x8A,0x00,0x00,0x00,0xCF,0x00,0x00,
   0x00,0xCF,0x00,0x00,0x00,0xCF,0x8A,0x00
};
// Persea fisting by Dardalorth / Fremos / Carlio
const u8 gc_PerseaFist[9*24] = {
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x44,0xCC,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0x9D,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0x9D,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0x9D,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0x88,0x00,0x00,0x00,0x00,
   0x00,0x00,0x45,0xCF,0x9F,0x3F,0x3F,0x6E,0x3F,
   0x00,0x00,0x6F,0xCF,0x9F,0x3F,0x3F,0x6E,0x3F,
   0x00,0x15,0x6F,0xCF,0xCF,0x00,0x00,0x00,0x00,
   0x00,0x3F,0x2A,0xCF,0x8A,0x00,0x00,0x00,0x00,
   0x00,0x3F,0x00,0xCF,0x8A,0x00,0x00,0x00,0x00,
   0x00,0x3F,0x7F,0xFF,0xAA,0x00,0x00,0x00,0x00,
   0x00,0x15,0x7F,0xFF,0x3F,0x00,0x00,0x00,0x00,
   0x00,0x00,0x15,0x17,0x3F,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x15,0x2B,0x3F,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x3F,0x2A,0x15,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x3F,0x00,0x00,0x3F,0x00,0x00,0x00,
   0x00,0x15,0x3F,0x00,0x00,0x3F,0x00,0x00,0x00,
   0x00,0x15,0x2A,0x00,0x00,0x3F,0x00,0x00,0x00,
   0x00,0x44,0x88,0x00,0x00,0xCC,0x00,0x00,0x00,
   0x00,0x45,0x8A,0x00,0x00,0xCF,0x00,0x00,0x00,
   0x00,0x45,0x8A,0x00,0x00,0xCF,0x8A,0x00,0x00
};
// Persea kicking by Dardalorth / Fremos / Carlio
const u8 gc_PerseaKick[9*24] = {
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x44,0xCC,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0x9D,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0x9D,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0x9D,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0x88,0x00,0x00,0x00,0x00,
   0x00,0x00,0x45,0xCF,0x9F,0x2A,0x00,0x00,0x45,
   0x00,0x00,0x6F,0xCF,0x9F,0x2A,0x00,0x00,0xCF,
   0x00,0x15,0x6F,0xCF,0x9F,0x2A,0x00,0x6E,0xCF,
   0x00,0x3F,0x2A,0xCF,0x9F,0x3F,0x03,0x6E,0x00,
   0x00,0x3F,0x00,0xCF,0x8A,0x6E,0x3F,0x02,0x00,
   0x00,0x3F,0x7F,0xFF,0xBF,0x46,0x3F,0x00,0x00,
   0x00,0x15,0x7F,0xFF,0x3F,0x2B,0x00,0x00,0x00,
   0x00,0x00,0x15,0x17,0x3F,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x15,0x2B,0x3F,0x00,0x00,0x00,0x00,
   0x00,0x00,0x3F,0x2A,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x15,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x15,0x2A,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x44,0x88,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x45,0x8A,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x45,0x8A,0x00,0x00,0x00,0x00,0x00,0x00
};
// Persea receiving a hit by Dardalorth / Fremos / Carlio
const u8 gc_PerseaHit[8*24] = {
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0xCC,0xCC,0x00,0x00,0x00,0x00,
   0x00,0x00,0x3F,0xCC,0x88,0x00,0x00,0x00,
   0x00,0x00,0x3F,0xCC,0x88,0x00,0x00,0x00,
   0x00,0x00,0x3F,0x6E,0x00,0x00,0x00,0x00,
   0x00,0x00,0x15,0x6E,0x88,0x00,0x00,0x00,
   0x00,0x00,0x45,0x3F,0x8A,0x00,0x00,0x00,
   0x00,0x00,0x45,0x3F,0x6F,0x00,0x00,0x00,
   0x00,0x00,0x45,0x9F,0x3F,0x8A,0x00,0x00,
   0x00,0x00,0x00,0xCF,0x3F,0x6E,0x3F,0x00,
   0x00,0x00,0x00,0xCF,0x9F,0x6E,0x3F,0x00,
   0x00,0x00,0x55,0xFF,0xAA,0x00,0x00,0x00,
   0x00,0x00,0x55,0x3F,0x2A,0x00,0x00,0x00,
   0x00,0x00,0x00,0x17,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x00,0x17,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x00,0x2B,0x3F,0x2A,0x00,0x00,
   0x00,0x00,0x00,0x3F,0x15,0x2A,0x00,0x00,
   0x00,0x00,0x15,0x2A,0x15,0x3F,0x00,0x00,
   0x00,0x00,0x15,0x2A,0x00,0x3F,0x00,0x00,
   0x00,0x00,0xCC,0x00,0x00,0x44,0x88,0x00,
   0x00,0x00,0xCF,0x00,0x00,0x45,0x8A,0x00,
   0x00,0x00,0xCF,0x8A,0x00,0x45,0xCF,0x00
};
// Persea wins by Dardalorth / Fremos / Carlio
const u8 gc_PerseaWins[8*24] = {
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCC,0xCC,0x00,0x00,0x00,
   0x15,0x2A,0x44,0xCC,0xCC,0x88,0x15,0x2A,
   0x15,0x2A,0x44,0x9D,0x6E,0x88,0x15,0x2A,
   0x44,0x88,0x00,0x9D,0x6E,0x00,0x44,0x88,
   0x15,0x3F,0x44,0x9D,0x6E,0x88,0x3F,0x2A,
   0x00,0x3F,0x3F,0x9F,0x6F,0x3F,0x3F,0x00,
   0x00,0x15,0x3F,0xCF,0xCF,0x3F,0x2A,0x00,
   0x00,0x00,0x45,0xCF,0xCF,0x8A,0x00,0x00,
   0x00,0x00,0x00,0xCF,0xCF,0x00,0x00,0x00,
   0x00,0x00,0x00,0xCF,0xCF,0x00,0x00,0x00,
   0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,
   0x00,0x00,0x00,0x7F,0xBF,0x00,0x00,0x00,
   0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00,
   0x00,0x00,0x15,0x3F,0x3F,0x2A,0x00,0x00,
   0x00,0x00,0x15,0x2A,0x15,0x2A,0x00,0x00,
   0x00,0x00,0x3F,0x2A,0x15,0x3F,0x00,0x00,
   0x00,0x00,0x3F,0x00,0x00,0x3F,0x00,0x00,
   0x00,0x15,0x3F,0x00,0x00,0x3F,0x2A,0x00,
   0x00,0x44,0x88,0x00,0x00,0x44,0x88,0x00,
   0x00,0x45,0x8A,0x00,0x00,0x45,0x8A,0x00,
   0x00,0x45,0x8A,0x00,0x00,0x45,0x8A,0x00
};
// Persea lying at the floor hit by Dardalorth / Fremos / Carlio
const u8 gc_PerseaKO[12*8] = {
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x8A,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x44,0x3F,0x2A,0x45,0xCF,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x44,0x3F,0x3F,0x3F,0x6F,0xDF,0x3F,0x3F,0x00,0x00,0x00,
   0x00,0x44,0xCC,0x3F,0x3F,0x3F,0xDF,0x03,0x3F,0x3F,0x2A,0x45,
   0x00,0x44,0xCC,0xCC,0x9F,0x3F,0x6E,0x3F,0x17,0x3F,0x6E,0xCF,
   0x00,0x00,0xCC,0x44,0xCF,0x3F,0x6E,0x3F,0x00,0x15,0x6E,0xCF
};
