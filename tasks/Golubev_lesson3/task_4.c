#include <stdio.h>
#include <math.h>

// *Описать структуру «прямая линия», которая должна состоять 
// из длины и двух внутренних структур типа «точка», в каждой из которых 
// должны содержаться координаты по осям 'х' и 'у'. Описать функцию, 
// принимающую на вход координаты двух точек и 
// возвращающую структуру «линия» с подсчитанной длиной.

typedef struct {
      float x;
      float y;
}Point;

typedef struct {
   float length;
   Point* point_1;
   Point* point_2;
} Line;

Line line_legth (Point* point_1, Point* point_2, Line* line)
{
   line -> length = sqrt((point_2 -> x - point_1 -> x)*(point_2 -> x - point_1 -> x) + (point_2 -> y - point_1 -> y)*(point_2 -> y - point_1 -> y));
   return *line;
}

int main()
{
   Point point1 = {2,2};
   Point point2 = {6,5};
   Line line;
   line_legth(&point1, &point2, &line);
   printf("%.2f\n", line.length);
}