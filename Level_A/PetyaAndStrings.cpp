#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string firstWord, secondWord;
    cin >> firstWord >> secondWord;

    transform(firstWord.begin(), firstWord.end(), firstWord.begin(), ::tolower);
    transform(secondWord.begin(), secondWord.end(), secondWord.begin(), ::tolower);

    if (firstWord < secondWord) {
        cout << -1 << "\n";
    } else if (firstWord > secondWord) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }

    return 0;
}
