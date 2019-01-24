#include <iostream>

int main()
{
   size_t num;
   std::cout << "Enter unsigned integer number" << std::endl;
   std::cin >> num;

   if (num > 3) {
      for (size_t i = num; i != 0; i--)
         std::cout << i << " ";
   }
   std::cout << std::endl;
}