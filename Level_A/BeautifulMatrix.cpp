#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int BeautifulMatrix[5][5];
    int moves = 0;
    int r = 0, c = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> BeautifulMatrix[i][j]; // 0 or 1
            if (BeautifulMatrix[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }

    while (r != 2)
    {
        if (r < 2)
        {
            swap(BeautifulMatrix[r][c], BeautifulMatrix[r + 1][c]);
            r++;
        }
        else
        {
            swap(BeautifulMatrix[r][c], BeautifulMatrix[r - 1][c]);
            r--;
        }
        moves++;
    }

    while (c != 2)
    {
        if (c < 2)
        {
            swap(BeautifulMatrix[r][c], BeautifulMatrix[r][c + 1]);
            c++;
        }
        else
        {
            swap(BeautifulMatrix[r][c], BeautifulMatrix[r][c - 1]);
            c--;
        }
        moves++;
    }

    cout << moves << endl;

    return 0;
}
