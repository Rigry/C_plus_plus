#include <iostream>
#include "include.h"

int division (int x, int y)
{
   return x%y;
}

void print (const int& i)
{
   std::cout << i << std::endl;
}

int main()
{
   print(division(12, 5));
   print(division(12, 2));
   print(division(15, 2));
}

// $ ./go lesson_2_2
// -- Configuring done
// -- Generating done
// -- Build files have been written to: /home/alexandr/code/education/C++/Golubev_lesson_2/build
// [ 50%] Built target lesson_2_1
// Scanning dependencies of target lesson_2_2
// [ 75%] Building CXX object CMakeFiles/lesson_2_2.dir/src/lesson_2_2.cpp.o
// [100%] Linking CXX executable lesson_2_2
// [100%] Built target lesson_2_2
// 2
// 0
// 1