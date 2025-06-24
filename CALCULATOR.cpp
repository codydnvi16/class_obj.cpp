// create a program of calculating of number all operations in one
#include <iostream>
using namespace std;
// create class of calculator
class calculator 
{
  float num1,num2;

public: // access specifier as public
     void getnm()
   {
       cin>>num1;
       cin>>num2;
   }
    void add ()
  {
      cout <<"addition is"<< num1+num2 << endl;
  }
  void subtract ()
  {
      cout <<"subtract value is"<< num1-num2<< endl;
  }
  void multiplication()
  {
       cout <<"Product value is"<< num1*num2 << endl;
  }
  void division (){
      cout <<"qution value is"<< num1/num2 << endl;
  }
};

int main() {
	// creat object of class
calculator cal;
cal.getnm();
cal.add();
cal.subtract();
cal.multiplication();
cal.division();
return 0;
}


