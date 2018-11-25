#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// с отрицательными тоже работает!!!

void dec_to_bin(int dec, char* bin)
{ 
   // int size = sizeof(number) * 8;
   // char bin_massiv[size + 1];
   // for(int i = 0; i <= (size - 1); i++){
   //    bin_massiv[i] = number & (1 << (size - 1) - i) ? '1' : '0';
   // }
   // bin_massiv[size + 1] = '\0'; 
   // // в конец строки необходимо записать символ конца строки, 
   // // без этого выводит хвост из другой памяти
   // if (bin) strcpy(bin, bin_massiv);

   for(int i = (sizeof(dec) * 8 - 1); i >= 0; i--)
      dec & (1 << i) ? strcat(bin,"1") : strcat(bin,"0");
}