#include "function.h"

int main()
{
   char* bin;
   printf("Enter a numder\nAlso you can enter a negative number\n");
   int a;
   scanf("%d", &a);
   dec_to_bin(a, bin);
   puts(bin);

   // puts(dec_to_bin(7));

   // memset(bin, 0, sizeof(int) * 8 +1);

   // dec_to_bin(7, bin);
   // puts(bin);

   // strcpy(bin, "");

   // dec_to_bin(15426, bin);
   // puts(bin);

   // strcpy(bin, "");

   // dec_to_bin(15426, bin);
   // puts(bin);

   // memset(bin, 0, sizeof(int) * 8 +1);

}