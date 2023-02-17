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
  person * people[2];

  for (int i = 0; i < 2; i++)
    people[i] = new person;

  people[0]->name = "Grace Lee";
  people[0]->age = 35;
  people[0]->gender = 'F';

  people[1]->name = "Brian Park";
  people[1]->age = 28;
  people[1]->gender = 'M';

  std::cout << "name : " << people[0]->name << " , age : " << (*people[0]).age << " , gender : " << people[0]->gender << " \n";
  std::cout << "name : " << people[1]->name << " , age : " << (*(people+1))->age << " , gender : " << (*people[1]).gender << " \n";

  for (int i = 0; i < 2; i++)
    delete people[i];

  return 0;
}