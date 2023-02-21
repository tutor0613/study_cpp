#include <iostream>
#include "chap10_class_stock.h"


void Stock::acquire(const std::string & co, long num, double price)
{
  company = co;

  if (num < 0)
  {
    std::cout << "Num of shares cannot be less than zero. \nThe value is set to zero. \n";
    shares = 0;
  }
  else
    shares = num;

  share_val = price;
  set_tot();
}

void Stock::buy(long num, double price)
{
  if (num < 0)
    std::cout << "Num of shares to buy cannot be less than zero. \nNo trade has been made. \n";
  else
  {
    shares += num;
    share_val = price;
    set_tot();
  }
}

void Stock::sell(long num, double price)
{
  if (num > shares)
    std::cout << "Num of shares cannot be less than zero. \nNo trade has been made. \n";
  else if (num < 0)
    std::cout << "Num of shares to sell cannot be less than zero. \nNo trade has been made. \n";
  else
  {
    shares -= num;
    share_val = price;
    set_tot();
  }
}

void Stock::update(double price)
{
  share_val = price;
  set_tot();
}

void Stock::show()
{
  std::cout << "Company Name : " << company << " , \n"
            << "Number of shares : " << shares << " , \n"
            << "Price per share : $" << share_val << " , \n"
            << "Total share : $" << total_val << " . \n";
}



int main()
{
  Stock hyunwoo;
  hyunwoo.acquire("Syscon", 100, 1.5);
  hyunwoo.show();
  hyunwoo.buy(1000, 0.9);
  hyunwoo.show();
  hyunwoo.update(2.2);
  hyunwoo.show();
  hyunwoo.sell(1099, 2.3);
  hyunwoo.show();
}