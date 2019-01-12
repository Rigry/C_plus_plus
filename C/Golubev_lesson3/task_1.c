#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* dec_to_bin(int);

int main()
{
   printf("Enter a numder\nAlso you can enter a negative number\n");
   int dec;
   scanf("%d", &dec);
   char* bin = dec_to_bin(dec);
   puts(bin);
   free(bin);
}

// число выводится так как лежит в памяти машины
char* dec_to_bin(int dec)
{
   char* bin = malloc(sizeof(int)*8); //можно воспользоваться calloc и не вызывать тогда memset, но оставлю пока так
   if (bin) {
      memset (bin, 0, sizeof(char)*sizeof(int));
      for(int i = (sizeof(int) * 8 - 1); i >= 0; i--)
         dec & (1 << i) ? strcat(bin,"1") : strcat(bin,"0");
      return bin;
   } else {
      fprintf (stderr, "fatal: failed to allocate memory (malloc of %ld bytes).\n", sizeof(int) * 8);
      exit(-1);
   }
   // есть редкая на применение функция xmalloc, в стандартной библиотеке не описана
   // которая вроде как сама проверяет на NULL и вызывает exit,
   // но не пробовал ничего с ней творить

}