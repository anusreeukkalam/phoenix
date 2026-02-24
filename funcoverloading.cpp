//compile time polymorphism is bascially overloading
//which can be either function/operator/constructor

#include <iostream>
using namespace std;

class Poly{
  public:
   void fun()
   {
     cout<<"no arguments fnc invoked\n";
   }

   void fun(int a,int b)
   {
     cout<<a<<" "<<b<<" int,int fnc invoked\n";
   }

   void fun(int a,string b)
   {
     cout<<a<<" "<<b<<" int,double fnc invoked\n";
   }
};

int main()
{
    Poly p1;
    p1.fun();
    p1.fun(5,10);
    p1.fun(10,"Hi");
    return 0;
}