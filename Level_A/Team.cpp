#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numberOfProblems;
    if (!(cin >> numberOfProblems)) return 0;

    int totalSolvedProblems = 0;

    for (int i = 0; i < numberOfProblems; i++) {
        int friendsAgreementCount = 0;
        int currentFriendDecision;

        for (int j = 0; j < 3; j++) {
            cin >> currentFriendDecision;
            friendsAgreementCount += currentFriendDecision;
        }

        if (friendsAgreementCount >= 2) {
            totalSolvedProblems++;
        }
    }

    cout << totalSolvedProblems << "\n";

    return 0;
}
