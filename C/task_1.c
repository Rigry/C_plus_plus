#include <stdio.h>

// №1 maths

void task_1()
{
   int Uo, Ui, R1, R2;
   Uo = Ui*(R1/(R2+R1));
   Ui = Uo*(R2+R1)/R1;
   R1 = Uo*R2/(Ui - Uo);
}

// №2 if/else
void number_in_range()
{
   printf("Введите любое целое число\n");
   int numder;
   scanf("%d", &numder);
   if (numder >= 0 && numder <= 100)
      printf("Ваше число %d находится в диапазоне от 0 до 100\n", numder);
   else 
      printf("Ваше число %d не попадает в диапазон от 0 до 100\n", numder);
}

// using ternary operator
void number_in_range_2()
{
   printf("Введите любое целое число\n");
   int numder = 0;
   scanf("%d", &numder);
   printf((numder >= 0 && numder <= 100) ?
      "Ваше число %d находится в диапазоне от 0 до 100\n" :
      "Ваше число %d не попадает в диапазон от 0 до 100\n", numder);
}

// №3 cycle_1
void average()
{
   printf("Введите любые 10 чисел\n");
   float numder = 0;
   int i = 0;
   float sum = 0;

   while (i < 10) {
      scanf("%f", &numder);
      i++;
      sum += numder;
   }

   printf("Среднее арифметическое ваших 10 чисел = %.2f\n", sum/10);
}

// №4 cycle_2
void triangle()
{
   printf("Из скольки строк Вы хотите постороить треугольник?\n");
   int qty_strings = 0;
   int current_string = 1;

   scanf("%d", &qty_strings);

   while(qty_strings--) {

      for (int j = 0; j <= qty_strings; j++) {
         printf(" ");
      }
      
      for (int k = 0; k < current_string; k++) {
         printf("^ ");
      }
      printf("\n");
      current_string++;
   }

}

// if you need triangle contour
void triangle_2()
{
   printf("Из скольки строк Вы хотите постороить треугольник?\n");
   int qty_strings = 0;
   int current_string = 1;

   scanf("%d", &qty_strings);
	int last_string = qty_strings;

   while(qty_strings--) {

      for (int j = 0; j <= qty_strings; j++) {
         printf(" ");
      }
      printf("^");
		if (current_string != 1 && current_string != last_string) {
      	for (int j = 0; j < (current_string*2 - 3); j++) {
      	   printf(" ");
      	}
			printf("^\n");
		} else if (current_string == last_string) {
			for (int j = 0; j < (current_string - 1); j++) {
      	   printf(" ^");
      	}
			printf("\n");
		} else printf("\n");
      current_string++;
   }

}

// to launch a task uncomment it
int main()
{
   number_in_range();
   // number_in_range_2();
   // average();
	// triangle();
	// triangle_2();
}