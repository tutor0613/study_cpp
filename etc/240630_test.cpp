#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    // string ret = "as1df1as1df";

    // for (int i=0; i < ret.size(); i++) {
    //     if (ret[i] == '1') {  // "1" not work. ONLY '1' possible.
    //         cout << "catch 1" << endl;
    //     }
    // }

    // int a(4), b(4), c(4);
    // if (a==b==c) {cout << "true" << endl;}

    // vector<int> a = {1, 3, 4, 5, 6};
    // string odd(""), even("");

    // for (int i:a) {
    //     if (i%2 == 1) {odd += to_string(i);}
    //     else {even += to_string(i);}
    // }
    // cout << odd << endl << even << endl;

    map<int, char> dict = { {1, 'w'}, {-1, 'a'}, {10, 's'}, {-10, 'd'}};
    vector<int> a = {1, -1, 10, -10};

    for (int i:a) {
        cout << dict[i] << endl;
    }

    return 0;
}