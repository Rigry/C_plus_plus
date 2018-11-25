#include "function.h"

int main()
{
   char* bin;
   printf("Enter a numder\nAlso you can enter a negative number\n");
   int a;
   scanf("%d", &a);
   dec_to_bin(a, bin);
   puts(bin);

}