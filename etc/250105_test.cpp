#include <string>
#include <vector>
#include <iostream>

using namespace std;


vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (int i=0; i < queries.size(); i++) {
        for (int j = queries[i][0]; j <= queries[i][1]; j++) {
            if (j % queries[i][2] == 0) {
                arr[j]++;
            }
        }
    }

    answer = arr;

    return answer;
}


int main() {
    vector<int> arr = {0, 1, 2, 4, 3};
    vector<vector<int>> queries = {{0, 4, 1}, {0, 3, 2}, {0, 3, 3}};

    vector<int> answer = solution(arr, queries);

    cout << "Answer : ";
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;

    return 0;
}