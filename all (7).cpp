#include <bits/stdc++.h>
using namespace std;

class account {
   private:
    string name;
    int balance;
public:
 void setdata(string n, int blance){
     name =n;
     if (blance<0)
     {
         cout <<"invalid balace "<<endl;
         balance =0;
     }
     else{
     balance=blance;
     }
 }
 void deposite(int amt){
     if(amt>0)
     balance +=amt;
 }
 void show(){
     cout <<"name<<"<< name<<endl;
     cout<<"balance"<< balance<<endl;
 }
};
int main(){
    account get;
    get.setdata("dhanvu", -200000000);
    get.deposite(50000000);
    get.show();
    return 0;
}



