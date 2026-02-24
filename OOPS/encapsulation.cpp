#include <iostream>
using namespace std;

class Account{
  private:
    double balance;
    int pin;

  public:
    string name;
    int accno;

    void getInfo()
    {
        cout<<"name: "<<name<<endl;
        //cout<<"balance: "<<balance;
    }

    void setBalance(double b, int p)
    { //setter function to set a new value to the private variable
        balance=b;
        pin=p;
    }
     
    int getBalanceAndPin()
    { //getter function to get a private variable's value
        cout<<balance<<" , "; // balance is printed 
        return pin; // pin is returned
    }
};

int main()
{
    Account a;
    a.name="xyz";
   // a.balance=80000;
    a.getInfo();
    a.setBalance(150000,1234);
    cout<< "pin and balance are now accessed: "<<a.getBalanceAndPin()<<endl;
    
    return 0;
}