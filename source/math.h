
/* 
** The contents of this file are subject to the Mozilla Public License
** Version 1.1 (the "License"); you may not use this file except in compliance
** with the License. You may obtain a copy of the License at
** http://www.mozilla.org/MPL/
** 
** Software distributed under the License is distributed on an "AS IS" basis,
** WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License for
** the specific language governing rights and limitations under the License.
*/

#ifndef __MATH_H__
#define __MATH_H__

#include <math.h>
#include <stdint.h>

int isqrt(int value);
int imin(int a, int b);
int imax(int a, int b);
int isqr(int value);
int imuldiv(int a, int b, int c);
void memcpy32(uint32_t *src, uint32_t *dst, int num);

#ifdef __WATCOMC__

#pragma aux imin =\
  "cmp eax, ebx",\
  "jl skipit",\
  "mov eax, ebx",\
  "skipit:",\
  parm nomemory [eax][ebx]\
  modify exact [eax];

#pragma aux imax =\
  "cmp eax, ebx",\
  "jg skipit",\
  "mov eax, ebx",\
  "skipit:",\
  parm nomemory [eax][ebx]\
  modify exact [eax];

#pragma aux isqr =\
  "imul eax, eax",\
  parm nomemory [eax]\
  modify exact [eax]\
  value [eax];
  
#pragma aux imuldiv parm [eax] [edx] [ebx] modify exact [eax edx] = \
  "imul edx"  \
  "idiv ebx";

#pragma aux memcpy32 = " rep movsd " parm [EDI] [ESI] [ECX] modify [EDI ESI ECX];

#endif

#endif /* __MATH_H__ */



