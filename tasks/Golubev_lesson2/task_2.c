#include <stdio.h>
#include "function.h"

// небольшой показательный тест для ленивых
// сама функция в function.h

int main ()
{
   int result;
   
   int array[] = {-2, -51, 4, 6};
   result = massif(array, 4); 
   // если кто знает как на С обезопасить код от введения,
   // например, размера превышающего размер массива, то подскажите пожалуйста

   result == 0 ? printf ("Array doesn't has odd numbers\n") :
                 printf ("Array've had odd numbers\n");

   int array_2[] = {2, 100, 4, 6, 32, 90, 500};
   result = massif(array, 7);

   result == 0 ? printf ("Array doesn't has odd numbers\n") :
                 printf ("Array've had odd numbers\n");


}