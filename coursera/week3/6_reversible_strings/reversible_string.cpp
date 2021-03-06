#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

// Реализуйте класс ReversibleString, хранящий строку и поддерживающий 
// методы Reverse для переворота строки и ToString для получения строки.
// Пример
// Код

// class ReversibleString {
// public:
//   ReversibleString() {}
//   ReversibleString(const string& s) {
//     data = s;
//   }
//   void Reverse() {
//     reverse(begin(data), end(data));
//   }
//   string ToString() const {
//     return data;
//   }
// private:
//   string data;
// };

class ReversibleString
{
   string s;
public:   
   ReversibleString(){s.clear();}
   ReversibleString(const string& str) : s{str} {}
   void Reverse(){reverse(s.begin(), s.end());}
   string ToString() const {return s;}
};

int main() {
  ReversibleString s("live");
  s.Reverse();
  cout << s.ToString() << endl;
  
  s.Reverse();
  const ReversibleString& s_ref = s;
  string tmp = s_ref.ToString();
  cout << tmp << endl;
  
  ReversibleString empty;
  cout << '"' << empty.ToString() << '"' << endl;
  
  return 0;
}

// Вывод

// evil
// live
// ""


// #include <algorithm>
// #include <string>



