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
//-------------------------------------------------------------------------------
//#####################################################################
//### MODULE: Firmware and ROM routines                             ###
//#####################################################################
//### Routines to disable CPC Firmware and reenable it when needed, ###
//### and managing Upper and Lower ROMs.                            ###
//#####################################################################
//
#ifndef CPCT_FIRMWARE_ED_H
#define CPCT_FIRMWARE_ED_H

// Enabling and disabling Firmware
extern void cpct_reenableFirmware();
extern void cpct_disableFirmware();

// Upper and Lower ROM control
extern void cpct_enableLowerROM();
extern void cpct_disableLowerROM();
extern void cpct_enableUpperROM();
extern void cpct_disableUpperROM();

#endif
