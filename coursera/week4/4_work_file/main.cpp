#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
// int main () {
//   string line;
//   ifstream input ("input.txt");
//   if (input.is_open())
//   {
//     while (! input.eof() )
//     {
//       getline (input,line);
//       cout << line << endl;
//     }
//     input.close();
//   }
 
//   else cout << "Unable to open file"; 
 
//   return 0;
// }

int main () {
  string line;
  ifstream input ("input.txt");
  ofstream output ("output.txt");
  if (input.is_open())
  {
    while (! input.eof() )
    {
      getline (input,line);
      output << line << endl;
    }
    input.close();
  }
 
  else cout << "Unable to open file"; 
 
  return 0;
}


// В этом задании вам предстоит написать две небольшие программы. 
// Каждый пункт - отдельная задача, решение отправляйте в поле с соответствующим номером.
// Часть 1

// Ваша программа должна считать содержимое файла input.txt и напечатать его на экран без изменений. 
// Гарантируется, что содержимое файла input.txt заканчивается переводом строки.
// Пример

// input.txt

// Keep calm
// and
// learn C++

// stdout

// Keep calm
// and
// learn C++

// Часть 2

// Снова считайте все содержимое файла input.txt, но на этот раз выведите его в файл output.txt . 
// Точно так же гарантируется, что содержимое файла input.txt заканчивается переводом строки.
// Пример

// input.txt

// Keep calm
// and
// learn C++

// output.txt

// Keep calm
// and
// learn C++
