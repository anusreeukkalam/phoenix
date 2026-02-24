//runtime polymorphism is implemented by func overriding using virtual funtions
//here it is compile time poly itself and it is statis binding

#include <iostream>
using namespace std;

class Teacher{
  public:
  void fun(int a, int b)
  {
     cout<<a<<" "<<b<<" parent class invoked\n";
  }
};

class Student: public Teacher{
  public:
  void fun(int a,int b)
  {
    cout<<a<<" "<<b<<" child class invoked\n";
  }
};

int main(){
    Teacher t;
    t.fun(100,200); //though both the funtions have same name and same parameters too(including type)
    Student s;      //here the functions are called based on the object type 
    s.fun(10,20);   //parent class object calls parent, where as child calls child
    return 0;       //parent function is overridden in child class
}