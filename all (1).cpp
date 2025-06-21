#include<iostream>
using namespace std;


class add
{
     int x,y;
 public: 
  void sum()
  {
     // cout <<"enter value";
      cin >> x>>y;
  }
  void display()
  {
      int total = x+y;
      cout <<"ans is:::"<< total <<endl;
  }
    
};
int main()
{
    add plus;
    plus.sum();
    plus.display();
    return 0;
}







































































































