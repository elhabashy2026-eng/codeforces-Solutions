#include <iostream>
using namespace std;

int main()
{
   int X = 0;
   int NumberOfLine;
   string Operators;
   cin >> NumberOfLine;

   for (int i = 0; i < NumberOfLine; i++)
   {
      cin >> Operators; // + or -
      for (int j = 1; j < Operators.length() - 1; j++)
      {
         if (Operators[j] == '+')
         {
            X++;
         }
         else if (Operators[j] == '-')
         {
            X--;
         }
         else
            X = X;
      }
   }

   cout << X;
   return 0;
}
