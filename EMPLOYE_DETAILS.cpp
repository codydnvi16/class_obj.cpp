
#include <iostream>
using namespace std;
// create class as emplyee
class employee 
{
// class members
  string name;
  int id;
  float salary;
  
  public:
 // class methods

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
	// create object as details
employee details;
details.getDetails();
details.displayDetails();
return 0;
}


