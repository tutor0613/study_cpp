#include <iostream>


int main()
{
  int a = 13;
  double b = 1.2345;
  std::string c = "ASDFASDF";
  char d[2] = "d";

  std::cout << "a : " << a << " , &a : " << &a << " \n";
  std::cout << "b : " << b << " , &b : " << &b << " \n";
  std::cout << "c : " << c << " , &c : " << &c << " \n";
  std::cout << "d : " << d << " , &d : " << &d << " \n";

  int* a_ptr = &a;
  double* b_ptr = &b;
  std::string* c_ptr = &c;

  std::cout << "*a_ptr : " << *a_ptr << " , a_ptr : " << a_ptr << " \n"; 
  std::cout << "*b_ptr : " << *b_ptr << " , b_ptr : " << b_ptr << " \n"; 
  std::cout << "*c_ptr : " << *c_ptr << " , c_ptr : " << c_ptr << " \n"; 

  return 0;
}