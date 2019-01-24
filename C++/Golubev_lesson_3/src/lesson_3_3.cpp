#include <iostream>

enum {
   _5 = 5, _4 = 4, _3 = 3, _2 = 2, _1 = 1, _0 = 0
};

int main()
{
   int num;
   std::cout << "Enter integer number" << std::endl;
   std::cin >> num;

   switch(num) {
      case _5:
      case _4:
      case _3:
         std::cout << "First half" << std::endl;
         break;
      case _2:
      case _1:
      case _0:
         std::cout << "Second half" << std::endl;
         break;
      default:
         std::cout << "Number outside" << std::endl;
   }
}