#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numberOfParticipants;
    int targetRankIndex;

    if (!(cin >> numberOfParticipants >> targetRankIndex)) return 0;

    vector<int> scores(numberOfParticipants);
    for (int i = 0; i < numberOfParticipants; i++) {
        cin >> scores[i];
    }

    int passingScore = scores[targetRankIndex - 1];
    int qualifiedParticipantsCount = 0;

    for (int i = 0; i < numberOfParticipants; i++) {
        if (scores[i] >= passingScore && scores[i] > 0) {
            qualifiedParticipantsCount++;
        }
    }

    cout << qualifiedParticipantsCount << "\n";

    return 0;
}
