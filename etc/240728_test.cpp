#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;


int solution(vector<string> friends, vector<string> gifts) {
    map<string, map<string, int>> presentMap;

    // Make presentMap (From, To, Num)
    size_t friendsLen = friends.size();
    for (int i = 0; i < friendsLen; i++) {
        for (int j = 0; j < friendsLen; j++) {
            if (i != j) presentMap[friends[i]][friends[j]] = 0;
        }
    }

    for (const string& aToB:gifts) {
        size_t i = aToB.find(' ');
        string a = aToB.substr(0, i);
        string b = aToB.substr(i+1);
        presentMap[a][b] += 1;
    }

    // Print Log
    for (const auto& p1:presentMap) {
        const string& nameA = p1.first;
        for (const auto& p2:p1.second) {
            const string& nameB = p2.first;
            const int& presentNum = p2.second;
            cout << nameA << " to " << nameB << " : " << presentNum << endl;
        }
    }

    map<string, int> predictNum;

    for (const string& who:friends) {
        predictNum[who] = 0;
        for (const string& f:friends) {
            if (who != f) {
                if (presentMap[who][f] > presentMap[f][who]) {
                    predictNum[who] += 1;
                }
            }
        }
    }

    map<string, int> presentPoint;


    return 0;
}


int main() {
    vector<string> friends = {"ryan", "muzi", "frodo"};
    vector<string> gifts = {"ryan muzi", "muzi frodo", "frodo ryan"};

    int ans = solution(friends, gifts);

    cout << "Answer : " << ans << endl;

    return 0;
}