// Общее описание

// В этой задаче вам надо разработать класс для представления рациональных 
// чисел и внедрить его в систему типов языка С++ так, чтобы им можно было 
// пользоваться естественным образом. Задание состоит из нескольких частей. 
// К каждой части приложен файл с заготовкой программы, который имеет следующую структуру 

// #include <iostream>
// using namespace std;

// // Комментарии, которые говорят, что именно нужно реализовать в этой программе

// int main() {
//     // Набор юнит-тестов для вашей реализации
//     cout << "OK" << endl;
//     return 0;
// }

// Вам нужно, не меняя тело функции main, реализовать то, что предложено в комментариях, 
// так, чтобы ваша программа выводила на экран сообщение OK. Функция main содержит ряд
//  юнит-тестов, которые проверяют правильность вашей реализации. 
//  Если эти тесты находят ошибку в вашей реализации, то вместо OK программа выведет 
//  подсказку о том, что именно работает неправильно.

// Когда ваша программа начнёт выводить OK, можете отправлять свой файл на проверку. 
// Ваша реализация будет тестироваться на другом, более полном наборе тестов. То есть, 
// если ваша программа выводит OK, то это не даёт гарантии, что ваша реализация будет 
// принята тестирующей системой. В случае неудачной посылки тестирующая система также 
// выдаст вам подсказку о том, какая именно часть реализации работает неправильно.

// Внимательно изучите набор юнит-тестов для каждой заготовки решения. Тесты описывают 
// требования, предъявляемые к вашей реализации, которые могут быть не указаны в условии задач

// На проверку можно отправлять весь файл с вашей реализацией: функцию main удалять из него не нужно.

// Часть 1

// В первой части вам надо реализовать класс Rational, который представляет 
// собой рациональное число вида p/q, где p целое, а q натуральное. Он должен иметь следующий интерфейс:

// class Rational {
// public:
//   Rational();
//   Rational(int numerator, int denominator);

//   int Numerator() const;
//   int Denominator() const;
// };

// должен выводить «2/3» — именно поэтому мы делаем Rational классом, а не структурой. 
// Структура позволила бы нарушить этот инвариант: 

// struct Rational {
//     int numerator, denominator;
// };

// Rational r{2, 3};
// r.numerator = 6; // Нарушен инвариант несократимости

// Список требований, предъявляемых к реализации интерфейса класса Rational:

//     Конструктор по умолчанию должен создавать дробь с числителем 0 и знаменателем 1.
//     При конструировании объека класса Rational с параметрами p и q должно выполняться сокращение дроби p/q (здесь вам может пригодиться решение задачи «Наибольший общий делитель»).
//     Если дробь p/q отрицательная, то объект Rational(p, q) должен иметь отрицательный числитель и положительный знаменатель.
//     Если дробь p/q положительная, то объект Rational(p, q) должен иметь положительные числитель и знаменатель (обратите внимание на случай Rational(-2, -3)).
//     Если числитель дроби равен нулю, то знаменатель должен быть равен 1.

// Гарантируется, что ни в одном из тестов, на которых будет тестироваться ваша реализация, 
// не будет знаменателя, равного нулю.

// Шаблон программы: rational_interface.cpp

// #include <iostream>
// using namespace std;

// class Rational {
// public:
//     Rational() {
//         // Реализуйте конструктор по умолчанию
//     }

//     Rational(int numerator, int denominator) {
//         // Реализуйте конструктор
//     }

//     int Numerator() const {
//         // Реализуйте этот метод
//     }

//     int Denominator() const {
//         // Реализуйте этот метод
//     }

// private:
//     // Добавьте поля
// };

// int main() {
//     {
//         const Rational r(3, 10);
//         if (r.Numerator() != 3 || r.Denominator() != 10) {
//             cout << "Rational(3, 10) != 3/10" << endl;
//             return 1;
//         }
//     }

//     {
//         const Rational r(8, 12);
//         if (r.Numerator() != 2 || r.Denominator() != 3) {
//             cout << "Rational(8, 12) != 2/3" << endl;
//             return 2;
//         }
//     }

//     {
//         const Rational r(-4, 6);
//         if (r.Numerator() != -2 || r.Denominator() != 3) {
//             cout << "Rational(-4, 6) != -2/3" << endl;
//             return 3;
//         }
//     }

//     {
//         const Rational r(4, -6);
//         if (r.Numerator() != -2 || r.Denominator() != 3) {
//             cout << "Rational(4, -6) != -2/3" << endl;
//             return 3;
//         }
//     }

//     {
//         const Rational r(0, 15);
//         if (r.Numerator() != 0 || r.Denominator() != 1) {
//             cout << "Rational(0, 15) != 0/1" << endl;
//             return 4;
//         }
//     }

//     {
//         const Rational defaultConstructed;
//         if (defaultConstructed.Numerator() != 0 || defaultConstructed.Denominator() != 1) {
//             cout << "Rational() != 0/1" << endl;
//             return 5;
//         }
//     }

//     cout << "OK" << endl;
//     return 0;
// }

// Часть 2

// Реализуйте для класса Rational операторы ==, + и - так, 
// чтобы операции с дробями можно было записывать естественным образом. 
// Например, следующий код должен быть валидным: 

// const Rational r = Rational(1, 2) + Rational(1, 3) - Rational(1, 4);
// if (r == Rational(7, 12)) {
//   cout << "equal";
// }

// Шаблон программы: rational_eq_add_sub.cpp

// #include <iostream>
// using namespace std;

// class Rational {
//     // Вставьте сюда реализацию класса Rational из первой части
// };

// // Реализуйте для класса Rational операторы ==, + и -

// int main() {
//     {
//         Rational r1(4, 6);
//         Rational r2(2, 3);
//         bool equal = r1 == r2;
//         if (!equal) {
//             cout << "4/6 != 2/3" << endl;
//             return 1;
//         }
//     }

//     {
//         Rational a(2, 3);
//         Rational b(4, 3);
//         Rational c = a + b;
//         bool equal = c == Rational(2, 1);
//         if (!equal) {
//             cout << "2/3 + 4/3 != 2" << endl;
//             return 2;
//         }
//     }

//     {
//         Rational a(5, 7);
//         Rational b(2, 9);
//         Rational c = a - b;
//         bool equal = c == Rational(31, 63);
//         if (!equal) {
//             cout << "5/7 - 2/9 != 31/63" << endl;
//             return 3;
//         }
//     }

//     cout << "OK" << endl;
//     return 0;
// }

// Часть 3

// Аналогично предыдущей части, реализуйте операторы * и /. Например, следующий код должен быть валидным: 
// const Rational r = Rational(1, 2) * Rational(1, 3) / Rational(1, 4);
// if (r == Rational(2, 3)) {
//   cout << "equal";
// }


// Гарантируется, что ни в одном из тестов, на которых будет 
// тестироваться ваша реализация, не будет выполняться деление на ноль.

// Шаблон программы: rational_mul_div.cpp

// #include <iostream>
// using namespace std;

// class Rational {
//     // Вставьте сюда реализацию класса Rational из первой части
// };

// // Вставьте сюда реализацию operator == для класса Rational из второй части

// // Реализуйте для класса Rational операторы * и /

// int main() {
//     {
//         Rational a(2, 3);
//         Rational b(4, 3);
//         Rational c = a * b;
//         bool equal = c == Rational(8, 9);
//         if (!equal) {
//             cout << "2/3 * 4/3 != 8/9" << endl;
//             return 1;
//         }
//     }

//     {
//         Rational a(5, 4);
//         Rational b(15, 8);
//         Rational c = a / b;
//         bool equal = c == Rational(2, 3);
//         if (!equal) {
//             cout << "5/4 / 15/8 != 2/3" << endl;
//             return 2;
//         }
//     }

//     cout << "OK" << endl;
//     return 0;
// }

// Часть 4

// В этой части вам нужно реализовать операторы ввода и вывода для класса Rational. 
// В результате у вас должен работать, например, такой код 

// Rational r;
// cin >> r;
// cout << r;

// Шаблон программы: rational_io.cpp
// #include <iostream>
// #include <sstream>
// using namespace std;

// class Rational {
//     // Вставьте сюда реализацию класса Rational из первой части
// };

// // Вставьте сюда реализацию operator == для класса Rational из второй части

// // Реализуйте для класса Rational операторы << и >>

// int main() {
//     {
//         ostringstream output;
//         output << Rational(-6, 8);
//         if (output.str() != "-3/4") {
//             cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
//             return 1;
//         }
//     }

//     {
//         istringstream input("5/7");
//         Rational r;
//         input >> r;
//         bool equal = r == Rational(5, 7);
//         if (!equal) {
//             cout << "5/7 is incorrectly read as " << r << endl;
//             return 2;
//         }
//     }

//     {
//         istringstream input("5/7 10/8");
//         Rational r1, r2;
//         input >> r1 >> r2;
//         bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//         if (!correct) {
//             cout << "Multiple values are read incorrectly: " << r1 << " " << r2 << endl;
//             return 3;
//         }

//         input >> r1;
//         input >> r2;
//         correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//         if (!correct) {
//             cout << "Read from empty stream shouldn't change arguments: " << r1 << " " << r2 << endl;
//             return 4;
//         }
//     }

//     cout << "OK" << endl;
//     return 0;
// }

// Часть 5

// Наконец, вам нужно реализовать возможность использовать объекты класса Rational 
// в качестве элементов контейнера set и ключей в контейнере map. Пример:

// set<Rational> rationals;
// rationals.insert(Rational(1, 2));
// rationals.insert(Rational(1, 3));
// 
// map<Rational, string> name;
// name[Rational(1, 2)] = "одна вторая";

// Шаблон программы: rational_map.cpp

// #include <iostream>
// #include <map>
// #include <set>
// #include <vector>
// using namespace std;

// class Rational {
//     // Вставьте сюда реализацию класса Rational из первой части
// };

// Вставьте сюда реализацию operator == для класса Rational из второй части

// Реализуйте для класса Rational оператор(ы), необходимые для использования его
// в качестве ключа map'а и элемента set'а

// int main() {
//     {
//         const set<Rational> rs = {{1, 2}, {1, 25}, {3, 4}, {3, 4}, {1, 2}};
//         if (rs.size() != 3) {
//             cout << "Wrong amount of items in the set" << endl;
//             return 1;
//         }

//         vector<Rational> v;
//         for (auto x : rs) {
//             v.push_back(x);
//         }
//         if (v != vector<Rational>{{1, 25}, {1, 2}, {3, 4}}) {
//             cout << "Rationals comparison works incorrectly" << endl;
//             return 2;
//         }
//     }

//     {
//         map<Rational, int> count;
//         ++count[{1, 2}];
//         ++count[{1, 2}];

//         ++count[{2, 3}];

//         if (count.size() != 2) {
//             cout << "Wrong amount of items in the map" << endl;
//             return 3;
//         }
//     }

//     cout << "OK" << endl;
//     return 0;
// }

