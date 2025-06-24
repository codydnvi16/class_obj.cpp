#include <iostream>
using namespace std;
// create an class as circle
class circle
{

 float radius;

public:
 
   void getnm(){
     cin >> radius;
 }

  int calcu () // calculate radius of circle take PI=3.14
 {
     return 3.14*radius*radius;
 }
};

int main() {
	// create object as name c..
 circle c;
 c.getnm();
 cout << "area of circle:"<< c.calcu()<<endl;
 return 0
}
