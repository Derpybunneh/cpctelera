;;-----------------------------LICENSE NOTICE------------------------------------
;;  This file is part of CPCtelera: An Amstrad CPC Game Engine 
;;  Copyright (C) 2014-2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
;;
;;  This program is free software: you can redistribute it and/or modify
;;  it under the terms of the GNU General Public License as published by
;;  the Free Software Foundation, either version 3 of the License, or
;;  (at your option) any later version.
;;
;;  This program is distributed in the hope that it will be useful,
;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;;  GNU General Public License for more details.
;;
;;  You should have received a copy of the GNU General Public License
;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
;;-------------------------------------------------------------------------------
;######################################################################
;### MODULE: Bit Array                                              ###
;### Developed by Alberto García García and Pablo Martínez González ###
;### Reviewed and optimized by ronaldo / Cheesetea                  ###
;######################################################################
;### This module contains functions to get and set groups of 1, 2   ###
;### and 4 bit in a char array. So data in arrays can be compressed ###
;### in a transparent way to the programmer.                        ###
;######################################################################
;
.module cpct_bitarray

;;
;; Compilation control directives
;;
;; If true, interrupts can be disabled to get function parameters faster
.equ let_disable_interrupts_for_function_parameters, 0  
