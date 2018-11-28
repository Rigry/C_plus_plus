#include <stdio.h>
#include <math.h>

// *Описать структуру «прямая линия», которая должна состоять 
// из длины и двух внутренних структур типа «точка», в каждой из которых 
// должны содержаться координаты по осям 'х' и 'у'. Описать функцию, 
// принимающую на вход координаты двух точек и 
// возвращающую структуру «линия» с подсчитанной длиной.

// для компиляции: gcc task_4.c -lm 

typedef struct {
      float x;
      float y;
}Point;

typedef struct {
   float length;
   Point point_1;
   Point point_2;
} Line;

Line line_legth(float x1, float y1, float x2, float y2)
{
   Line line;
   line.point_1.x = x1;
   line.point_1.y = y1;
   line.point_2.x = x2;
   line.point_2.y = y2;
   line.length = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)); // т. Пифагора
   return line;
}

int main()
{
   printf("Enter the coordinates of the first point\nx1: ");
   float x1 = 0;
   scanf("%f", &x1);
   printf("y1: ");
   float y1 = 0;
   scanf("%f", &y1);
   printf("Enter the coordinates of the second point\nx2: ");
   float x2 = 0;
   scanf("%f", &x2);
   printf("y2: ");
   float y2 = 0;
   scanf("%f", &y2);
   printf("Line length = %.2f\n", line_legth(x1, y1, x2, y2).length);
}