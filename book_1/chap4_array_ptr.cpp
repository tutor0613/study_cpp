#include <iostream>


int main()
{
  int arr[3] {1, 2, 3};

  int * ptr1 = arr;
  int * ptr2 = &arr[0];

  std::cout << "arr : " << ptr1 << " , &arr[0] : " << ptr2 << std::endl;

  return 0;
}