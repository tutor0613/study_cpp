#include <iostream>

// 1 mile == 1.60934 km

const double mile_to_km = 1.60934;
double converter(double);

int main()
{
    using namespace std;

    cout << "Converter from mile to km" << endl;

    double input;
    cout << "Input mile : ____ mile\b\b\b\b\b\b\b\b\b";
    cin >> input;

    cout << input << " mile is " << converter(input) << " km. " << endl;

    return 0;
}

double converter(double mile)
{
    double km;
    km = mile * mile_to_km;

    return km;
}