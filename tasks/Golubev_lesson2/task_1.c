#include <stdio.h>
#include "function.h"

// небольшой показательный тест для ленивых
// сама функция в function.h

int main ()
{
   float x1, x2;
   int result = 0;

	result = calculateSquareEquality(0, 3, 7, &x1, &x2);
	printf("\033[1;33ma = 0, b = 3,  c = 7 \033[0m");

   result == 0 ? printf("\033[1;37mx1 = x2 = %.2f\n\033[0m", x1) :
	result == 1 ? printf("\033[1;37mx1 = %.2f, x2 = %.2f\n\033[0m", x1, x2) :
                 printf("\033[1;37mThere aren't real roots\n\033[0m");
	// x1 = x2 = -2.33

	result = calculateSquareEquality(5, -7, 2, &x1, &x2);
	printf("\033[1;33ma = 5, b = -7, c = 2 \033[0m");

   result == 0 ? printf("\033[1;37mx1 = x2 = %.2f\n\033[0m", x1) :
	result == 1 ? printf("\033[1;37mx1 = %.2f, x2 = %.2f\n\033[0m", x1, x2) :
                 printf("\033[1;37mThere aren't real roots\n\033[0m");
	// x1 = 1.00, x2 = 0.40
	
	result = calculateSquareEquality(3, 6, 3, &x1, &x2);
	printf("\033[1;33ma = 7, b = 4,  c = 3 \033[0m");

   result == 0 ? printf("\033[1;37mx1 = x2 = %.2f\n\033[0m", x1) :
	result == 1 ? printf("\033[1;37mx1 = %.2f, x2 = %.2f\n\033[0m", x1, x2) :
                 printf("\033[1;37mThere aren't real roots\n\033[0m");
	// x1 = x2 = -1.00

	result = calculateSquareEquality(3, 4, 2, &x1, &x2);
	printf("\033[1;33ma = 3, b = 4,  c = 4 \033[0m");

   result == 0 ? printf("\033[1;37mx1 = x2 = %.2f\n\033[0m", x1) :
	result == 1 ? printf("\033[1;37mx1 = %.2f, x2 = %.2f\n\033[0m", x1, x2) :
                 printf("\033[1;37mThere aren't real roots\n\033[0m");
	// There aren't real roots

	// // если передать указатели, инициализированные NULL
	float *root1 = NULL; // неинициализированные какой-то переменной
	float *root2 = NULL; // неинициализированные какой-то переменной

	result = calculateSquareEquality(2, 15, 2, root1, root2);
	printf("\033[1;33ma = 2, b = 15, c = 2 \033[0m");

   result == 0 ? printf("\033[1;37mEquation has one root\n\033[0m") :
	result == 1 ? printf("\033[1;37mEquation has two root\n\033[0m") :
                 printf("\033[1;37mThere aren't real roots\n\033[0m");
	// Equation has two root

	// main продолжает выполняться, закоментируйте проверку на NULL и увидите дамп
	// это же уравнение, но с инициализированными указателями
	root1 = &x1;
	root2 = &x2;

	result = calculateSquareEquality(2, 15, 2, root1, root2);
	printf("\033[1;33ma = 2, b = 15, c = 2 \033[0m");

   result == 0 ? printf("\033[1;37mx1 = x2 = %.2f\n\033[0m", x1) :
	result == 1 ? printf("\033[1;37mx1 = %.2f, x2 = %.2f\n\033[0m", x1, x2) :
                 printf("\033[1;37mThere aren't real roots\n\033[0m");
	// x1 = -0.14, x2 = -7.36

   return 0;
}