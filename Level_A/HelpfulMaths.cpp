#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   string ArithmeticExpressions;
   string Num = "";
   cin >> ArithmeticExpressions;

   for (int i = 0; i < ArithmeticExpressions.length(); i++)
   {
      if (i % 2 == 0)
      {
         Num += ArithmeticExpressions[i];
      }
   }

   for (int i = 0; i < Num.length(); i++)
   {
      for (int j = 0; j < Num.length() - 1; j++)
      {
         if (Num[j] > Num[j + 1])
         {
            swap(Num[j], Num[j + 1]);
         }
      }
   }

   for (int i = 0; i < Num.length(); i++)
   {
      cout << Num[i];
      if (i < Num.length() - 1)
      {
         cout << "+";
      }
   }

   return 0;
}
