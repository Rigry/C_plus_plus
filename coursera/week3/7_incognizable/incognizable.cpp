struct Incognizable
{
   int x {0};
   int y {0};
   Incognizable(){}
   Incognizable(int i) : x{i} {}
   Incognizable(int _1, int _2) : x{_1}, y{_2} {}
};


// Определите тип Incognizable, для которого следующий код будет корректен:
int main() {
  Incognizable a;
  Incognizable b = {};
  Incognizable c = {0};
  Incognizable d = {0, 1};
  return 0;
}

// struct Incognizable {
//   int x = 0;
//   int y = 0;
// };