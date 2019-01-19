#include <iostream>
#include <map>
#include <set>

std::set<std::string> BuildMapValuesSet(const std::map<int, std::string>& m) {
   std::set<std::string> value;
   for (auto& i : m) {
      value.insert(i.second);
   }
   return value;
}


int main()
{
   std::set<std::string> values = BuildMapValuesSet({
      {1, "odd"},
      {2, "even"},
      {3, "odd"},
      {4, "even"},
      {5, "odd"}
   });

   for (const std::string& value : values) {
      std::cout << value << std::endl;
   }
}

// Напишите функцию BuildMapValuesSet, принимающую на вход словарь map<int, string> и 
// возвращающую множество значений этого словаря:

// set<string> BuildMapValuesSet(const map<int, string>& m) {
//   // ...
// }

// Пример
// Код

// set<string> values = BuildMapValuesSet({
//     {1, "odd"},
//     {2, "even"},
//     {3, "odd"},
//     {4, "even"},
//     {5, "odd"}
// });

// for (const string& value : values) {
//   cout << value << endl;
// }

// Вывод
// even
// odd

// Пояснение

// В этой задаче на проверку вам надо прислать файл с реализацией функции BuildMapValuesSet. 
// Этот файл не должен содержать функцию main. Если в нём будет функция main, вы получите ошибку компиляции.

// set<string> BuildMapValuesSet(const map<int, string>& m) {
//   set<string> values;
//   for (const auto& item : m) {
//     values.insert(item.second);
//   }
//   return values;
// }