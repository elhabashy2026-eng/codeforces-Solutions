#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numberOfWords;
    if (!(cin >> numberOfWords)) return 0;

    while (numberOfWords--) {
        string currentWord;
        cin >> currentWord;

        int wordLength = currentWord.length();

        if (wordLength > 10) {
            cout << currentWord[0] << wordLength - 2 << currentWord[wordLength - 1] << "\n";
        } else {
            cout << currentWord << "\n";
        }
    }

    return 0;
}
