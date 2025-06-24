#include <bits/stdc++.h>
using namespace std;

class circle
{
  
  float radius; 
 public:
 
 void getnm(){
     cin >> radius;
 }
 int calcu ()
 {
     return 3.14*radius*radius;
 }
};

int main() {
	// your code goes here
 circle c;
 c.getnm();
 cout << "area of circle:::"<< c.calcu()<<endl;
 return 0;
}
