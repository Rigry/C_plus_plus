#include <iostream>
#include <map>
#include <set>

int main()
{
   int qty{0};
   std::cin >> qty;

   std::map<std::string, std::set<std::string>> synonyms;

   while (qty--) {
      std::string command;
      std::cin >> command;

      if (command == "ADD") {
         std::string word_1, word_2;
         std::cin >> word_1 >> word_2;
         synonyms[word_1].insert(word_2);
         synonyms[word_2].insert(word_1);
      }

      if (command == "COUNT") {
         std::string word;
         std::cin >> word;
         std::cout << synonyms[word].size() << std::endl;
      }

      if (command == "CHECK") {
         std::string word_1, word_2;
         std::cin >> word_1 >> word_2;
         if (synonyms[word_1].count(word_2))
            std::cout << "YES" << std::endl;
         else 
            std::cout << "NO" << std::endl;
      }
   }
}


// Два слова называются синонимами друг друга, если они имеют похожие значения. 
// Реализуйте следующие операции над словарём синонимов:

//     ADD word1 word2 — добавить в словарь пару синонимов (word1, word2).
//     COUNT word — узнать количество синонимов слова word.
//     CHECK word1 word2 — проверить, являются ли слова word1 и word2 синонимами. 
//     Слова word1 и word2 считаются синонимами, если среди запросов ADD был хотя бы один 
//     запрос ADD word1 word2 или ADD word2 word1.

// Формат ввода

// Сначала вводится количество запросов Q, затем Q строк с описаниями запросов. 
// Гарантируется, что в каждом запросе CHECK и ADD слова word1 и word2 различны. 
// Все слова состоят лишь из латинских букв, цифр и символов подчёркивания.

// Формат вывода

// Для каждого запроса в соответствующей строке выведите ответ на него:

//     В ответ на запрос COUNT word выведите единственное целое число — количество синонимов слова word.
//     В ответ на запрос CHECK word1 word2 выведите строку YES, если word1 и word2 являются синонимами, 
//     и NO в противном случае.

// Пример
// Ввод

// 8
// ADD program code
// COUNT cipher
// ADD code cipher
// COUNT code
// COUNT program
// CHECK code program
// CHECK program cipher
// CHECK cpp java

// 0
// 2
// 1
// YES
// NO
// NO

// #include <iostream>
// #include <string>
// #include <map>
// #include <set>

// using namespace std;

// int main() {
//   int q;
//   cin >> q;

//   map<string, set<string>> synonyms;

//   for (int i = 0; i < q; ++i) {
//     string operation_code;
//     cin >> operation_code;

//     if (operation_code == "ADD") {

   //    string first_word, second_word;
   //    cin >> first_word >> second_word;
      
   //    // второе слово добавляем в список синонимов первого...
   //    synonyms[first_word].insert(second_word);
   //    // и наоборот
   //    synonyms[second_word].insert(first_word);

   //  } else if (operation_code == "COUNT") {

   //    string word;
   //    cin >> word;
   //    cout << synonyms[word].size() << endl;

   //  } else if (operation_code == "CHECK") {

   //    string first_word, second_word;
   //    cin >> first_word >> second_word;
      
//       // ищём второе слово во множестве синонимов первого
//       // (можно было сделать и наоборот)
//       if (synonyms[first_word].count(second_word) == 1) {
//         cout << "YES" << endl;
//       } else {
//         cout << "NO" << endl;
//       }

//     }
//   }

//   return 0;
// }


