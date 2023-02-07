#include <iostream>
#include <math.h>

int main()
{
    using namespace std;

    double input;

    cout << "Insert double type variable : ";
    cin >> input;

    double output;
    output = sqrt(input);

    cout << "sqrt(input) : " << output << " !!" << endl;

    return 0;
}

