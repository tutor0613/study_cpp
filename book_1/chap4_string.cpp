#include <iostream>
#include <string>
#include <cstring>


int main()
{
    using namespace std;

    string str_1 = "Hello World !!";

    cout << "str_1 : " << str_1 << endl;
    cout << "str_1.size : " << str_1.size() << endl;

    string name;

    cout << "Your Name : ________\b\b\b\b\b\b\b\b";
    getline(cin, name);

    cout << "Your Name is " << name << " , its size : " << name.size() << endl << endl;

}