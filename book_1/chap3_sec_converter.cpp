#include <iostream>

using namespace std;

void convert(long);

int main()
{
    long input;
    
    cout << "Input seconds : ____________ s\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin >> input;
    cout << endl;

    convert(input);

    return 0;
}

void convert(long input)
{
    int sec;
    int min;
    int hour;
    int day;
    int year;

    min = input / 60;
    sec = input % 60;
    hour = min / 60;
    min = min % 60;
    day = hour / 24;
    hour = hour % 24;
    year = day / 365;
    day = day % 365;

    cout << input << " sec is " << year << " year " << day << " day " << hour << " hour " << min << " min " << sec << " sec. \n";
}