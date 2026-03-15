#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int watermelonWeight;
    
    if (!(cin >> watermelonWeight)) return 0;

    if (watermelonWeight > 2 && watermelonWeight % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
