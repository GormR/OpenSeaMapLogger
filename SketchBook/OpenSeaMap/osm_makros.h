/*
  makros.cpp - Ein paar nützliche Makros - Version 0.1
  Copyright (c) 2012 Wilfried Klaas.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#define between(a,x,y) ((a >=x) && (a <= y))

#define print2Dec(value, stream) \
  if (value < 10) {\
    stream.print("0");\
  }\
  stream.print(value);\

#define print3Dec(value, stream) \
  if (value < 100) {\
    stream.print("0");\
  }\
  if (value < 10) {\
    stream.print("0");\
  }\
  stream.print(value);\
