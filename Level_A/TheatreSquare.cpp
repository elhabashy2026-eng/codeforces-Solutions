#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   long long N , M ,a;
   cin >> N >> M >> a;

   long long rows = (N + a - 1) / a;
   long long cols = (M + a - 1) / a;

   cout << rows * cols ;

   return 0;
}
