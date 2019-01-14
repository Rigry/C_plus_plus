#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// int main()
// {

// }

// int main()
// {  
//    int n;
//    std::cin >> n;

//    std::vector<bool> line;
   
//    std::string command;
//    int qty;

//    while (n) {
//       std::cin >> command;

//       if (command == "COME") {
//          std::cin >> qty;
//          if (qty >= 0) {
//             while (qty) {
//                line.push_back(false);
//                qty--;
//             }
//          } else {
//             line.resize(line.size() + qty);
//          }
//       } else if (command == "WORRY") {
//          std::cin >> qty;
//          line[qty] = true;
//       } else if (command == "WORRY_COUNT") {
//          std::cout << std::count(line.begin(), line.end(), true) << std::endl;
//       } else if (command == "QUIET") {
//          std::cin >> qty;
//          line[qty] = false;
//       }

//       n--;
//    }
// 
   // for (auto i: line)
   //    std::cout << i << " ";

//    std::cout << std::endl;
// }

// int main()
// {
//    int qty_days{0};
//    std::cin >> qty_days;
//    int sum{0};
//    int value{0};
//    std::vector<int> temp (qty_days);

//    for (auto& n : temp) {
//       std::cin >> n;
//       sum += n;
//    }

//    value = sum/qty_days;

//    int qty{0};

//    for (auto i = 0; i < qty_days; i++) {
//       if (temp[i] > value)
//          qty++;
//    }

//    std::cout << qty << std::endl;

//    for (auto i = 0; i < temp.size(); i++) {
//       if (temp[i] > value)
//          std::cout << i << " ";
//    }

//    std::cout << std::endl;
// }

// auto Reversed(const std::vector<int>& v)
// {
//    std::vector<int> copy = v;
//    std::reverse(copy.begin(), copy.end());
//    return copy;
// }

// int main()
// {
//    std::vector<int> v {1,2,3,4};
//    for (auto i : Reversed(v))
//       std::cout << i << " ";

//    std::cout << std::endl;
// }

// void MoveStrings (std::vector<std::string>& source, std::vector<std::string>& destination)
// {
//    for (auto i : source) {
//       destination.push_back(i);
//    }
//    source.clear();
// }

// int main()
// {
//    std::vector<std::string> source {"a", "b", "c"};
//    std::vector<std::string> destination {"z"};
//    MoveStrings (source, destination);
//    for (auto i : source)
//       std::cout << i << " ";
//    std::cout << std::endl;

//    for (auto i : destination)
//       std::cout << i << " ";
//    std::cout << std::endl;
// }

// bool IsPalindrom(std::string s)
// {
//    std::string s_1 = s;
//    std::reverse(s.begin(), s.end());
//    return (s == s_1) ? true : false;
// }

// auto PalindromFilter(std::vector<std::string> words, int minLength)
// {
//    std::vector<std::string> palindroms;
//    for (auto i: words) {
//       if (IsPalindrom(i) and i.size() >= minLength)
//          palindroms.push_back(i);
//    }

//    return palindroms;
// }

// int main()
// {
//    std::vector<std::string> words {"abacaba", "aba", "weew", "bro", "code"};
//    for (auto i : PalindromFilter(words, 4)) {
//       std::cout << i << " ";
//    }

//    std::cout << std::endl;
// }

// int main()
// {
//    std::string s;
//    std::cin >> s;
//    std::cout << IsPalindrom(s) << std::endl;
// }

// int Factorial (int n)
// {
//    if (n <= 0) return 1;
//    int result{1};
//    for (int i = 1; i <= n; i++){
//       result *= i;
//    }
//    return result;
// }

// int main()
// {
//    int n;
//    std::cin >> n;
//    std::cout << Factorial(n) << std::endl;
// }

using namespace std;

int main() {
    int n;
    vector<int> bits;

    cin >> n;
    while (n > 0) {
        bits.push_back(n % 2);
        n /= 2;
    }

    for (int i = bits.size() - 1; i >= 0; --i) {
        cout << bits[i];
    }
    return 0;
}

// int main()
// {
//    int a;
//    std::cin >> a;
//    std::vector<int> bin;
//    while (a){
//       bin.push_back(a%2);
//       a/=2;
//    }

//    // std::reverse(bin.begin(), bin.end());

//    // for (auto i : bin){
//    //    std::cout << i;
//    // }
   
//    for (int i = bin.size()-1; i >= 0; --i){
      
//       std::cout << bin[i];
//    }
//    std::cout << std::endl;
// }

// int main()
// {
//    double a{0};
//    double b{0};
//    double c{0};
//    std::cin >> a >> b >> c;

//    double root1;
// 	double root2;


//    if (a == 0) {
//       if (b != 0) 
//          std::cout << -c/b << std::endl;
//    } else if (a != 0 and b != 0) {
//    	double D = b * b - 4 * a * c;
//    	if (D > 0) {
//    	   root1 = (-b + sqrt(D))/(2*a);
//    	   root2 = (-b - sqrt(D))/(2*a);
//    	   std::cout << root1 << " " << root2 << std::endl;
//    	} else if (D == 0) {
//    	   root1 = root2 = -b/(2*a);
//    	   std::cout << root1 << std::endl;
//    	}
//    }
// }