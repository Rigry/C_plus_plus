#include <iostream>
#include<string>

struct Specialization
{
   std::string string;
   explicit Specialization(const std::string& s) : string{s} {}
};

struct Course
{
   std::string string;
   explicit Course(const std::string& s) : string{s} {}
};

struct Week
{
   std::string string;
   explicit Week(const std::string& s) : string{s} {}
};

struct LectureTitle {
   std::string specialization;
   std::string course;
   std::string week;
   LectureTitle(const Specialization& s
              , const Course& c
              , const Week& w)
              : specialization{s.string}
              , course        {c.string}
              , week          {w.string}
   {}
};

int main()
{
   LectureTitle title (
      Specialization("C++"),
      Course("White belt"),
      Week("4th")
   );
   // std::cout << title.course;
}


// Дана структура LectureTitle:

// struct LectureTitle {
//   string specialization;
//   string course;
//   string week;
// };

// Допишите конструктор и структуры Specialization, 
// Course, Week так, чтобы объект LectureTitle можно было создать с помощью кода
// LectureTitle title(
   //  Specialization("C++"),
   //  Course("White belt"),
   //  Week("4th")
// );

// но нельзя было с помощью следующих фрагментов кода:
// LectureTitle title("C++", "White belt", "4th");

// LectureTitle title(string("C++"), string("White belt"), string("4th"));

// LectureTitle title = {"C++", "White belt", "4th"};

// LectureTitle title = {{"C++"}, {"White belt"}, {"4th"}};

// LectureTitle title(
//     Course("White belt"),
//     Specialization("C++"),
//     Week("4th")
// );

// LectureTitle title(
//     Specialization("C++"),
//     Week("4th"),
//     Course("White belt")
// );


