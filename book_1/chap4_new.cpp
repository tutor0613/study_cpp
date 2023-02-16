#include <iostream>
#include <cstring>

char * get_name(void);

int main()
{
  // How to use new
  int * ptr1 = new int;
  double * ptr2 = new double;

  *ptr1 = 15;
  *ptr2 = 25.3253;

  std::cout << "ptr1 : " << ptr1 << " , *ptr1 : " << *ptr1 << " , &ptr1 : " << &ptr1 << std::endl;
  std::cout << "ptr2 : " << ptr2 << " , *ptr2 : " << *ptr2 << " , &ptr2 : " << &ptr2 << std::endl;

  delete ptr1;
  delete ptr2;


  // How to use new at array
  int * pt_arr = new int [5];

  pt_arr[0] = 1;
  pt_arr[1] = 2;

  // pt_arr = pt_arr + 1;

  std::cout << "[0] : " << pt_arr[0] << " , [1] : " << pt_arr[1] << " , [2] : " << pt_arr[2] << std::endl;

  delete [] pt_arr;


  // How to use new for dynamic string input 
  char * name;

  name = get_name();

  std::cout << "Your name is " << name << ". \n";

  delete [] name;

  return 0;
}

char * get_name()
{
  char temp[80];

  std::cout << "Input your name : ";
  std::cin.getline(temp, 80);

  char * ptr = new char[strlen(temp) + 1];

  strcpy(ptr, temp);

  return ptr;
}