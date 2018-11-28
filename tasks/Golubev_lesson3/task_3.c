#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Написать функцию-обёртку, возвращающую указатель на область памяти, 
// которую затем можно использовать как массив из элементов типа integer.
// Количество элементов указывается в аргументе функции. Массив должен быть
// гарантированно инициализирован нулями. Для проверки
// заполните этот массив и выведите на экран.

int* wrap (int);

int main()
{
   printf("Enter the size of massiv: ");
   int size = 0;
   scanf("%d", &size);
   int* p = wrap(size);

   for (int i = 0; i <= size - 1; i++) {
      p[i] = i*i;
      printf ("%d ", p[i]);
   }
   printf("\n");

   free(p);
   return 0;
}

// calloc allocates memory for an array of num objects of size size 
// and initializes all bytes in the allocated storage to ZERO,
int* wrap (int size)
{
   int* p = (int*) calloc(size, sizeof(int));
   if (p)
      return p;
   else {
      fprintf (stderr, "fatal: failed to allocate memory (calloc of %ld bytes).\n", size * sizeof(int));
      exit(-1);
   }
}

 