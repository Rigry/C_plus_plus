#include <iostream>

int main()
{
   constexpr size_t buffer_size = 255;
   char chars[buffer_size];
   for (int i, j; i <= buffer_size; i++, j+=3) {
      chars[i] = j;
   }

   for (int i; i <= buffer_size; i++) {
      std::cout << chars[i] << " ";
   }
   std::cout << std::endl;
}
