#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Описать функцию, возвращающую строку с 
// двоичным представлением десятичного числа,
// переданного в аргументе этой функции

void dec_to_bin(int, char*); // с отрицательными тоже работает!!!

int main()
{
   char* bin;
   printf("Enter a numder\nAlso you can enter a negative number\n");
   int a;
   scanf("%d", &a);
   dec_to_bin(a, bin);
   puts(bin);
}

void dec_to_bin(int dec, char* bin)
{ 
   for(int i = (sizeof(dec) * 8 - 1); i >= 0; i--)
      dec & (1 << i) ? strcat(bin,"1") : strcat(bin,"0");
}