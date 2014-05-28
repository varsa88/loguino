
/* Copyright 2014 David Irvine
 *
 * This file is part of Loguino
 *
 * Loguino is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Loguino is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Loguino.  If not, see "http://www.gnu.org/licenses/".
 *
*/



// If enabled, loguino will poll the Megasquirt Engine Management System
//#define ENABLE_MEGASQUIRT_POLLER
// If enabled, loguino will write debug information for this poller
//#define DEBUG_MEGASQUIRT_POLLER
// The number of cycles to wait before retrying communication with the
// megasquirt ECU.
#define MS_WAIT_TIME 10
// The pin to illuminate when the ECU is online and functioning.
#define MS_STATUS_PIN 5

