// Swapping of numbers 
#include<iostream>
using namespace std;

class swapping
{
     int temp,a,b;
 public: 
  void getnum()
  {
      cout <<"enter value of a"<< endl;
      cin >> a;
      cout << "enter value of b"<< endl;
      cin >> b;
  }
  void displayTemp()
  {
      temp=a;
      a=b;
      b=temp;
      cout <<"after swap value of a is:" < <a  <<endl;
     cout << "after swap value of b is:" << b <<endl;
    
  }
    
};
int main()
{
    swapping swap;
    swap.getnum();
    swap.displayTemp();
    return 0;
}







































































































