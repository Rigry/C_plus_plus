#include <stdio.h>
#include "function.h"

// небольшой показательный тест для ленивых
// сама функция в function.h

int main ()
{
   int array[] = {173145, 100};
   conversion_massif(array, 2);
   //-23463 2 100 0

   int array_1[] = {-7, 856};
   conversion_massif(array_1, 2);
   // -7 -1 856 0

   int array_2[] = {157342, 123, 34, 8};
   conversion_massif(array_2, 2);
   // 26270 2 123 0
   return 0;
}