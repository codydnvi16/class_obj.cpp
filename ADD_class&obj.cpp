
// Creating Addition of Two number using class ad object concept

#include<iostream>
using namespace std;

class addition
{
      int x,y;
public: 
   void sum()
  {
      cout <<"enter value" << endl;
      cin >> x>>y;
  }
   void displaySum()
  {
      int total = x+y;
      cout <<"ans is :" << total <<endl;
  } 
};

int main()
{
    addition plus;     // class name and object name
    plus.sum();        // object . method call
    plus.displaySum();
    return 0;
}






































































































