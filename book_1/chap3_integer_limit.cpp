#include <iostream>
#include <climits>

int main()
{
    using namespace std;

    int max_int = INT_MAX;
    short max_short = SHRT_MAX;
    long max_long = LONG_MAX;
    long long max_llong = LLONG_MAX;

    cout << "int - size : " << sizeof(int) << " bytes, max value : " << max_int << " . \n";
    cout << "short - size : " << sizeof(short) << " bytes, max value : " << max_short << " . \n";
    cout << "long - size : " << sizeof(long) << " bytes, max value : " << max_long << " . \n";
    cout << "longlong - size : " << sizeof(long long) << " bytes, max value : " << max_llong << " . \n";

    return 0;
}