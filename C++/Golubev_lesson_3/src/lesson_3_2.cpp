#include <iostream>

int main()
{
   double number;
   std::cout << "Enter number" << std::endl;
   std::cin >> number;
   if (number < 5) {
      std::cout << "Enter another number" << std::endl;
      std::cin >> number;
      if (number > 5 and number < 10) {
         number -= 5;
      } else {
         number = 5 - number;
      }
   }
   if (number > 0)
      std::cout << "More than zero" << std::endl;
   else if (number == 0)
      std::cout << "Zero" << std::endl;
   else 
      std::cout << "Less than zero" << std::endl;

   std::cout << number << std::endl;
}