#include <iostream>
#include <string>
#include <vector>
#include <set>

int main()
{
   int n{0};
   std::cin >> n;
   std::vector<std::string> strings(n);
   for (auto& c : strings)
      std::cin >> c;
   std::set<std::string> s (strings.begin(), strings.end());
   std::cout << s.size() << std::endl;
}


// Дан набор строк. Найдите количество уникальных строк в этом наборе.
// Формат ввода

// Сначала вводится количество строк N, затем — сами N строк, разделённые пробелом. Все строки состоят лишь из латинских букв, цифр и символов подчёркивания.
// Формат вывода

// Выведите единственное целое число — количество уникальных строк в данном наборе.

// #include <iostream>
// #include <string>
// #include <set>

// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   set<string> strings;
//   for (int i = 0; i < n; ++i) {
//     string s;
//     cin >> s;
//     strings.insert(s);
//   }
//   cout << strings.size() << endl;

//   return 0;
// }