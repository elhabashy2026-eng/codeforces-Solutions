#include <iostream>
using namespace std;

int main()
{
   int NumOfProblem_T = 0;
   int NumberOfProblems;
   bool state;
   cin >> NumberOfProblems;

   for (int i = 0; i < NumberOfProblems; i++)
   {
      int Num_T = 0;
      for (int j = 0; j < 3; j++)
      {
         cin >> state;
         if (state)
         {
            Num_T += 1;
         }
      }
      if (Num_T >= 2)
      {
         NumOfProblem_T += 1;
      }
   }

   cout << NumOfProblem_T;

   return 0;
}
