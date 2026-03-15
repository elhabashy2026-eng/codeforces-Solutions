#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string inputExpression;
    cin >> inputExpression;

    string numbersOnly = "";

    for (int i = 0; i < inputExpression.length(); i += 2) {
        numbersOnly += inputExpression[i];
    }

    sort(numbersOnly.begin(), numbersOnly.end());

    for (int i = 0; i < numbersOnly.length(); i++) {
        cout << numbersOnly[i];
        if (i < numbersOnly.length() - 1) {
            cout << "+";
        }
    }

    cout << "\n";
    return 0;
}
