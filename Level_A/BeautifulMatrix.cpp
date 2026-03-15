#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int input;
    int targetRow = 2, targetCol = 2;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> input;
            
            if (input == 1) {
                int moves = abs(i - targetRow) + abs(j - targetCol);
                cout << moves << endl;
                return 0;
        }
    }

    return 0;
}
