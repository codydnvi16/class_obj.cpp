


#include <bits/stdc++.h>
using namespace std;

class employee 
{
  
  string name;
  int id;
  float salary;
  
  public:
  
  void getDetails(){
      cout <<"Enter Name of employ:"<<endl;
      cin>>name;
      cout<<"Enter your Id:"<<endl;
      cin>>id;
      cout<<"Enter your salary:"<<endl;
  }
  void displayDetails()
  {
      cout << "Employee Details"<<endl;
      cout <<"Name:"<<name<<endl;
      cout <<"Id:"<< id << endl;
      cout<< "Salary:"<< salary<<endl;
  }
};


int main() {
	// your code goes here
employee details;
details.getDetails();
details.displayDetails();
return 0;
}


