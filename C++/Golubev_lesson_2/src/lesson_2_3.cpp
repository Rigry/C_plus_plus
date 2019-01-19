#include <iostream>
#include <cstring>

void print (char* array)
{
   std::cout << array << std::endl;
}

int main()
{
   char array[4];
   std::strcpy (array, "One");
   print(array);
   std::strcpy (array, "HI");
   print(array);
}

// $ ./go lesson_2_3
// -- Configuring done
// -- Generating done
// -- Build files have been written to: /home/alexandr/code/education/C++/Golubev_lesson_2/build
// [ 16%] Building CXX object CMakeFiles/lesson_2_3.dir/src/lesson_2_3.cpp.o
// [ 33%] Linking CXX executable lesson_2_3
// [ 33%] Built target lesson_2_3
// [ 50%] Building CXX object CMakeFiles/lesson_2_1.dir/src/lesson_2_1.cpp.o
// /home/alexandr/code/education/C++/Golubev_lesson_2/src/lesson_2_1.cpp:7:26: warning:
//       implicit conversion from 'int' to
//       'unsigned char' changes value from 1400 to
//       120 [-Wconstant-conversion]
//    unsigned char num_2 = 1400;
//                  ~~~~~   ^~~~
// 1 warning generated.
// [ 66%] Linking CXX executable lesson_2_1
// [ 66%] Built target lesson_2_1
// [ 83%] Building CXX object CMakeFiles/lesson_2_2.dir/src/lesson_2_2.cpp.o
// [100%] Linking CXX executable lesson_2_2
// [100%] Built target lesson_2_2
// One
// HI

