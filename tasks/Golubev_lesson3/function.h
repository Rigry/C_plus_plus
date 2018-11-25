#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// с отрицательными тоже работает!!!

void dec_to_bin(int dec, char* bin)
{ 
   for(int i = (sizeof(dec) * 8 - 1); i >= 0; i--)
      dec & (1 << i) ? strcat(bin,"1") : strcat(bin,"0");
}