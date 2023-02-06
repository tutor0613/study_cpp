#include <iostream>

// 1 mile == 1.60934 km

double converter(double);

int main()
{
    using namespace std;

    cout << "Converter from mile to km" << endl;

    double input;
    cout << "Input mile : ";
    cin >> input;

    cout << input << "mile is " << converter(input) << " km. " << endl;

    return 0;
}

double converter(double mile)
{
    double km;
    km = mile * 1.60934;

    return km;
}