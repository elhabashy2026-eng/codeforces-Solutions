#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

#define ll long long
#define endl '\n'

void fast_io()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
}

void solve()
{
   int N;
   cin >> N;
   vector<int> NumberOfNumber(N);

   for (int i = 0; i < N; i++)
   {
      cin >> NumberOfNumber[i];
   }
   int Target = NumberOfNumber[0];
   for (int i = 0; i < N; i++)
   {
      if (Target < NumberOfNumber[i])
      {
         Target = NumberOfNumber[i];
      }
   }

   for (int i = 0; i < N; i++)
   {
      if (Target == NumberOfNumber[i])
      {
         Target--;
         continue;
      }
      else
      {
         for (int j = i + 1; j < N; j++)
         {
            if (Target == NumberOfNumber[j])
            {
               reverse(NumberOfNumber.begin() + i, NumberOfNumber.begin() + (j + 1));

               for (int k = 0; k < N; k++)
                  cout << NumberOfNumber[k] << " ";
               cout << endl;
               return;
            }
         }
      }
   }
   for (int k = 0; k < N; k++)
      cout << NumberOfNumber[k] << " ";
   cout << endl;
}

int main()
{
   fast_io();

   int t = 1;
   cin >> t;

   while (t--)
   {
      solve();
   }

   return 0;
}
