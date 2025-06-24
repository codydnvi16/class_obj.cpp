
#include <bits/stdc++.h>
using namespace std;

class calculator 
{
  float num1,num2;
  
  public:
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
	// your code goes here
calculator obj;
obj.getnm();
obj.add();
obj.subtract();
obj.multiplication();
obj.division();
return 0;
}


