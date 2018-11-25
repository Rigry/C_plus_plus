#include <stdio.h>

typedef struct
{
   int length;
   int width;
   int perimeter;
   int area;
} Rectangle;

void counter (Rectangle*);

int main ()
{
   Rectangle rectangle;

   printf("Enter the legth of the rectangle: ");
   scanf("%d", &rectangle.length);

   printf("Enter the width of the rectangle: ");
   scanf("%d", &rectangle.width);

   counter(&rectangle);

   printf("Area of the rectangle = %d\n", rectangle.area);
   printf("Perimeter of the rectangle = %d\n", rectangle.perimeter);
}


void counter (Rectangle* rectangle)
{
   rectangle -> perimeter = 2*(rectangle -> length + rectangle -> width);
   rectangle -> area      = rectangle -> length * rectangle -> width;
}