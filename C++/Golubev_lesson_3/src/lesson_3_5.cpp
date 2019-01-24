#include <iostream>

int main()
{
   size_t qty_sticks;
   std::cout << "Enter qty sticks from 10 to 30" << std::endl;
   std::cin >> qty_sticks;
   if (qty_sticks >= 10 and qty_sticks <= 30) {
      for (int i = qty_sticks; i > 0; i--)
      std::cout << "|";
      std::cout << std::endl;
      while (qty_sticks) {
         int q;
         std::cin >> q;
         qty_sticks -= q;
         for (int i = qty_sticks; i > 0; i--) {
               std::cout << "|";
         }
         std::cout << std::endl;
      }
   std::cout << "You've just lost" << std::endl;
   } else 
      std::cout << "Try again" << std::endl;

}

/*
Çàäàíèå 5:
1. Çàïðîãðàììèðóéòå èãðó íà âçÿòèå ïàëî÷åê: Ïðîèãðûâàåò òîò, êòî áåðåò ïîñëåäíþþ ïàëî÷êó;
2. Çàïðîñèòå ó ïîëüçîâàòåëÿ ÷èñëî ïàëî÷åê ïåðåä íà÷àëîì èãðû: îíî äîëæíî áûòü íå ìåíåå 10, íî íå áîëåå 30; 
3. Èñïîëüçóéòå óñëîâíóþ öèêëè÷åñêóþ îïåðàöèþ äëÿ îáðàáîòêè ââîäà;
4. Êàæäûé èç èãðîêîâ ìîæåò âçÿòü íå áîëåå 3, íî íå ìåíåå 1 ïàëî÷êè çà õîä; 
5. Ïîïðîáóéòå ñîñòàâèòü àëãîðèòì êîìïüþòåðíîãî èãðîêà, êîòîðûé â ñîñòîÿíèè âçÿòü è 1, è 2, è 3 ïàëî÷êè çà õîä. 
*/

// #include <iostream>

// using namespace std;

// int solve(int num) //íà âõîä, êîë-âî îñòàâøèõñÿ ïàëî÷åê, âûõîä - ñêîëüêî íóæíî óáðàòü
// {
//     int temp;

//     if (num < 10 && num > 6)
//     {
//         temp = num - 6;
//         if (temp > 3)
//             return 3;
//         else
//             return temp;
//     }

//     if (num == 5 || num == 6) return 1;

//     if (num <= 4) return num - 1;//îñòàâëÿåì 1 ïàëî÷êó

//     return 3;
// }

// int main()
// {
//     unsigned int stNum, humNum, prNum;

//     do {
//         cout << "Enter the number of sticks (10-30)" << endl;
//         cin >> stNum;
//     } while (stNum < 10 || stNum > 30);

//     while (stNum > 1)
//     {
//         cout << "Sticks left " << stNum << endl;
//         do {
//             cout << "Enter the number of sticks you want to remove (1-3)" << endl;
//             cin >> humNum;
//         } while ((humNum < 1 || humNum > 3) && ((stNum-humNum) > 0)); //ââîä, ïîêà íå ââåäåò ïðàâèëüíî

//         stNum -= humNum; //õîä èãðîêà
//         cout << "Sticks left " << stNum << endl;

//         if (stNum == 1)
//         {
//             cout << "You Win!" << endl;
//             break;
//         }

//         prNum = solve(stNum); //õîä ïðîãðàììû
//         cout << "I removed " << prNum << endl;
//         stNum -= prNum;

//         if (stNum == 1)
//         {
//             cout << "Sticks left " << stNum << endl;
//             cout << "I Win!" << endl;
//             break;
//         }
//     }

//     return 0;
// }