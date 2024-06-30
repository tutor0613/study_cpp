#include <iostream>
#include <string>
#include <vector>

using namespace std;

int add_odd(int& n) {
    int res(0);
    for (int i=1; i<=n; i+=2) {
        res += i;
    }
    return res;
}

int add_even(int& n) {
    int res(0);
    for (int i=2; i<=n; i+=2) {
        res += i^2;
    }
    return res;
}

int main()
{
    int a(4);
    vector<int> vec = {10, 5, 3};
    
    cout << vec.size() << endl;

    return 0;
}