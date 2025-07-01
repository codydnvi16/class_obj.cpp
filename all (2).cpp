#include <bits/stdc++.h>
using namespace std;

class bankaccount{
 private:
   string accholder;
   int accno;
   double balance;
 public:
    void createacc(string nm, int no, double b){
        accholder=nm;
        accno=no;
        balance=b;
    }
    void deposite(double amt){
        balance +=amt;
        cout<<"deposite"<<amt<<" "<<"new balance"<<balance<<endl;
    }
    void withdraw(double amt)
     {
        if ( amt > balance){
            cout<<"insuffient"<<endl;
        }else{
             balance -= amt;
             cout<<"withdraw::"<< amt<<" "<<"new amt:"<< balance<<endl;
        }
    }
    double getbalance()
    {
         return balance;
    }
    void show(){
         cout<<"name_"<< accholder<<endl;
         cout<<"account num_"<< accno<<endl;
         cout <<"balance_"<< balance <<endl;
    }
};

int main() {
	bankaccount accc;
	accc.createacc("Dhanvi",12121,1000000);
	
	cout <<"Deposite 500"<<endl;
	accc.deposite(500);
	
	cout <<"Withdraw 2000"<<endl;
	accc.withdraw(2000);
	
    accc.show();
    return 0;
}