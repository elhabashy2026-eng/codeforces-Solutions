#include <iostream>
using namespace std;

int main()
{
   string word1, word2;
   cin >> word1;
   cin >> word2;
   for (int i = 0; i < word1.length(); i++)
   {
      word1[i] = tolower(word1[i]);
   }
   for (int i = 0; i < word2.length(); i++)
   {
      word2[i] = tolower(word2[i]);
   }

   for (int i = 0; i < word1.length(); i++)
   {
      if (word1[i] == word2[i])
         continue;
      else if (word1[i] > word2[i])
      {
         cout << 1;
         return 0;
      }
      else
      {
         cout << -1;
         return 0;
      }
   }
   cout << 0;

   return 0;
}
