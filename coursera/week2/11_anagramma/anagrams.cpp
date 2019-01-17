#include <iostream>
#include <string>
#include <vector>
#include <map>

auto in_map (const std::string& string)
{
   std::map<char, int> word;
   for (auto& s : string) {
         word[s]++;
   }

   return word;
}

int main()
{
   std::vector<std::string> words(2);
   // std::string word_1;
   // std::string word_2;

   int qty;
   std::cin >> qty;
   while(qty--) {
      //    std::string word_1;
      //    std::string word_2;
      // std::cin >> word_1 >> word_2;
      for (auto& v : words)
         std::cin >> v;
      // if (words[0] == words[1]) {
      //    std::cout << "NO" << std::endl;
      if (in_map(words[0]) == in_map(words[1]))
         std::cout << "YES" << std::endl;
      else 
         std::cout << "NO" << std::endl;

   }
   return 0;
}

// Слова называются анаграммами друг друга, если одно из них можно получить 
// перестановкой букв в другом. Например, слово «eat» можно получить перестановкой 
// букв слова «tea», поэтому эти слова являются анаграммами друг друга. Даны пары слов, 
// проверьте для каждой из них, являются ли слова этой пары анаграммами друг друга.

// 3
// aet tea
// YES
// find search
// NO
// master stream
// YES

// #include <iostream>
// #include <string>
// #include <map>

// using namespace std;

// map<char, int> BuildCharCounters(const string& word) {
//   map<char, int> counters;
//   for (char c : word) {
//     ++counters[c];
//   }
//   return counters;
// }

// int main() {
//   int n;
//   cin >> n;

//   for (int i = 0; i < n; ++i) {
//     string first_word, second_word;
//     cin >> first_word >> second_word;
//     if (BuildCharCounters(first_word) == BuildCharCounters(second_word)) {
//       cout << "YES" << endl;
//     } else {
//       cout << "NO" << endl;
//     }
//   }

//   return 0;
// }


