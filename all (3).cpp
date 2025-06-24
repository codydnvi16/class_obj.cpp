#include <bits/stdc++.h>
using namespace std;

class rectangle
{
     int length,width;//class members
public:

    void dimension()
{  //class methods dimension and totL  
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
	cout <<"area of rect"<< area << endl;
return 0;
}
