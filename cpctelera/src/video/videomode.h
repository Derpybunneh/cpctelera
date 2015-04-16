//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of CPCtelera: An Amstrad CPC Game Engine
//  Copyright (C) 2014-2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
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
//-------------------------------------------------------------------------------

#ifndef CPCT_VIDEOMODE_H
#define CPCT_VIDEOMODE_H

#define cpct_setVideoBorderHW(A) cpct_setVideoINKHW(16, (A))

typedef unsigned char byte;

extern void cpct_setVideoMode(byte videoMode);
extern void cpct_setVideoPaletteHW(byte* ink_array, byte ink_array_size);
extern void cpct_setVideoINKHW(byte pen, byte ink);
extern void cpct_waitVSYNC();
extern byte cpct_getHWColour(byte firmware_colour);
extern void cpct_fw2hw(void *fw_colour_array, byte size);

#endif
