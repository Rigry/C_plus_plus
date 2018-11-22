#pragma once
#include <stdio.h>
#include <math.h>

int calculateSquareEquality(int a, int b, int c, float* x1, float* x2)
{
	float root1;
	float root2;
	// вообще не понятно для чего вводить коэффициент а = 0, но
	// предусмотреть такое мы должны
	if (a == 0) {
      root1 = root2 = (float)-c/b;
		if (x1) *x1 = root1;
		if (x2) *x2 = root2;
		return 0;
   } else {
   	double D = b * b - 4 * a * c;
   	if (D > 0) {
   	   root1 = (-b + sqrt(D))/(2*a);
   	   root2 = (-b - sqrt(D))/(2*a);
			if (x1) *x1 = root1;
			if (x2) *x2 = root2;
   	   return 1;
   	} else if (D == 0) {
   	   root1 = root2 = (float)-b/(2*a);
			if (x1) *x1 = root1;
			if (x2) *x2 = root2;
   	   return 0;
   	} else
   	   return -1;
	}
	// пользователь может передать ничем (NULL)
	// неинициализированные указатели в функцию
	// ошибки сегментирования (дамп памяти) не будет, если делать проверку на NULL,
	// мы будем знать кол-во решений уравнения, но не значения его корней,
	// основная программа при этом продолжит выполняться
}

int massif (int* array, int array_size)
{
   int odd = 0;
   for (int i = 0; i < array_size; i++) {
		if (array[i] % 2 != 0) {
			array[i] *=2;
         odd++;
      }
   }
   if (odd) {
		for (int i = 0; i < array_size; i++) {
			printf("%d ", array[i]);
		}
		printf("\n");
		return 1;
	} else return 0;
}