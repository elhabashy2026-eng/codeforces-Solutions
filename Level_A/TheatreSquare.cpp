#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long theatreWidth, theatreHeight, flagstoneSize;
    if (!(cin >> theatreWidth >> theatreHeight >> flagstoneSize)) return 0;

    long long flagstonesAlongWidth = (theatreWidth + flagstoneSize - 1) / flagstoneSize;
    long long flagstonesAlongHeight = (theatreHeight + flagstoneSize - 1) / flagstoneSize;

    long long totalFlagstonesRequired = flagstonesAlongWidth * flagstonesAlongHeight;

    cout << totalFlagstonesRequired << endl;

    return 0;
}
