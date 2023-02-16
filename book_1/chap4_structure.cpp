#include <iostream>


struct person
{
  std::string name;
  int age;
  char gender;
};

struct widget
{
  std::string brand;
  int type;  // 1:int, 2:str
  union  // anonymous union => 잘 안됨 쓰지말자 !!
  {
    long id_num;
    char id_char[20];
  };
};

enum spectrum {red, orange, yellow, green, blue, indigo, violet};

int main()
{
  person yp {"Youngpyeong Kim", 28, 'M'};

  std::cout << "name : " << yp.name << " , age : " << yp.age << " , gender : " << yp.gender << " \n";
  // std::cout << "gender[0] : " << yp.gender[0] << " , gender[1] : " << yp.gender[1] << " \n";

  spectrum color[3] {red, green, blue};

  std::cout << color[0] << " " << color[1] << " " << color[2] << " \n";
}