#include <iostream>
using namespace std;

int main()
{
   int NumberOfWord;
   string word;
   cin >> NumberOfWord;

   for (int i = 1; i <= NumberOfWord; i++)
   {
      cin >> word;

      if (word.length() > 10)
      {
         cout << word[0];
         cout << word.length() - 2;
         cout << word[word.length() - 1] << endl;
      }
      else
         cout << word << endl;
   }

   return 0;
}
