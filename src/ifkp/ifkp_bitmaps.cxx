// ----------------------------------------------------------------------------
// Copyright (C) 2014
//              David Freese, W1HKJ
//
// This file is part of flrig.
//
// flrig is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// flrig is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// ----------------------------------------------------------------------------

#include <FL/Fl_Bitmap.H>

static unsigned char s2n_data[] = {
   0x02, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x80, 0x00, 0x40, 0x00, 0x80, 0x00, 0x40, 0x02, 0x80, 0x00, 0x00,
   0x01, 0x80, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x80, 0x00, 0x40,
   0x00, 0x80, 0x00, 0x40, 0x02, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00,
   0x01, 0x00, 0x01, 0x00, 0x01, 0x80, 0x00, 0x40, 0x00, 0x80, 0x00, 0x40,
   0x02, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x80, 0x00, 0x40, 0x00, 0x80, 0x00, 0x40, 0x02, 0x80, 0x00, 0x00,
   0x01, 0x80, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x80, 0x00, 0x40,
   0x00, 0x80, 0x00, 0x40, 0x02, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00,
   0x01, 0x00, 0x01, 0x00, 0x01, 0x80, 0x00, 0x40, 0x00, 0x80, 0x00, 0x40,
   0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0c, 0x00, 0x00, 0x80,
   0x01, 0x00, 0x00, 0x30, 0x0c, 0x00, 0x00, 0x0c, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x20, 0x12, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x20,
   0x12, 0x00, 0x00, 0x92, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
   0x12, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x20, 0x12, 0x00, 0x00, 0x90,
   0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x12, 0x00, 0x00, 0x40,
   0x02, 0x00, 0x00, 0x20, 0x12, 0x00, 0x00, 0x88, 0x04, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x23, 0x12, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x20,
   0x12, 0x00, 0x00, 0x84, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
   0x12, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x20, 0x12, 0x00, 0x00, 0x82,
   0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0c, 0x00, 0x00, 0x80,
   0x01, 0x00, 0x00, 0x70, 0x0c, 0x00, 0x00, 0x1e, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
   
Fl_Bitmap image_s2n(s2n_data, 160, 16);
