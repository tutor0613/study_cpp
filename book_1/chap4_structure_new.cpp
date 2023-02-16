#include <iostream>


struct person
{
  std::string name;
  int age;
  char gender;
};


int main()
{
  // Dynamic structure
  person * person_ptr = new person;

  person_ptr->name = "Grace Lee";
  person_ptr->age = 35;
  person_ptr->gender = 'F';

  std::cout << "name : " << (*person_ptr).name << " , age : " << (*person_ptr).age << " , gender : " << (*person_ptr).gender << " \n";

  delete person_ptr;

  return 0;
}