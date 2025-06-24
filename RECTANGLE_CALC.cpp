#include <iostream>
using namespace std;
// create class as rectangle
class rectangle
{
// class members
     int length,width;

public:
//class methods dimension and totL
    void dimension()
{  
    cin>> length;
    cin>>width;
}
    int totL()
{
    return length*width;
}     
};

int main()
{
	rectangle dim;
	dim.dimension();
	
	int area = dim.totL();
	cout <<"area of rect:"<< area << endl;
return 0;
}
