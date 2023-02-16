#include <iostream>


int main()
{
  int * ptr1 = new int;
  double * ptr2 = new double;

  *ptr1 = 15;
  *ptr2 = 25.3253;

  std::cout << "ptr1 : " << ptr1 << " , *ptr1 : " << *ptr1 << " , &ptr1 : " << &ptr1 << std::endl;
  std::cout << "ptr2 : " << ptr2 << " , *ptr2 : " << *ptr2 << " , &ptr2 : " << &ptr2 << std::endl;

  delete ptr1;
  delete ptr2;

  int * pt_arr = new int [5];

  pt_arr[0] = 1;
  pt_arr[1] = 2;

  // pt_arr = pt_arr + 1;

  std::cout << "[0] : " << pt_arr[0] << " , [1] : " << pt_arr[1] << " , [2] : " << pt_arr[2] << std::endl;

  delete [] pt_arr;

  return 0;
}