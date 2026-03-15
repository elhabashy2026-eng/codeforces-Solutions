#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numberOfStatements;
    if (!(cin >> numberOfStatements)) return 0;

    int xValue = 0;
    string currentOperation;

    for (int i = 0; i < numberOfStatements; ++i) {
        cin >> currentOperation;

        if (currentOperation[1] == '+') {
            xValue++;
        } else {
            xValue--;
        }
    }

    cout << xValue << endl;

    return 0;
}
