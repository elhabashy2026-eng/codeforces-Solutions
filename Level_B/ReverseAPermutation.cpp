#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define endl '\n'

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> permutation(n);
    for (int i = 0; i < n; i++) cin >> permutation[i];

    int expectedValue = n;
    for (int i = 0; i < n; i++) {
        if (permutation[i] == expectedValue) {
            expectedValue--;
            continue;
        }

        for (int j = i + 1; j < n; j++) {
            if (permutation[j] == expectedValue) {
                reverse(permutation.begin() + i, permutation.begin() + j + 1);
                break;
            }
        }
        break;
    }

    for (int i = 0; i < n; i++) {
        cout << permutation[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    fast_io();
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}
