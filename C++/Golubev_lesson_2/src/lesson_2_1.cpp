#include <iostream>
#include "include.h"

int main()
{
   short num_1 = 45000;
   unsigned char num_2 = 1400;
   std::cout << "short num_1 = " << num_1 << std::endl;
   std::cout << "unsigned char num_2 = " << num_2 << std::endl;
}

// $ ./go lesson_2_1
// -- Configuring done
// -- Generating done
// -- Build files have been written to: /home/alexandr/code
// /education/C++/Golubev_lesson_2/build
// Scanning dependencies of target lesson_2_1
// [ 50%] Building CXX object CMakeFiles/lesson_2_1.dir/src/lesson_2_1.cpp.o
// /home/alexandr/code/education/C++/Golubev_lesson_2/src/lesson_2_1.cpp:7:26: warning:
//       implicit conversion from 'int' to
//       'unsigned char' changes value from 1400 to
//       120 [-Wconstant-conversion]
//    unsigned char num_2 = 1400;
//                  ~~~~~   ^~~~
// 1 warning generated.
// [100%] Linking CXX executable lesson_2_1
// [100%] Built target lesson_2_1
// short num_1 = -20536
// unsigned char num_2 = x