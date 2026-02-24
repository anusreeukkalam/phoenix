//virtual keyword in the base class method makes a difference 
//only when using pointers or references to the base class
#include <iostream>
using namespace std;

class Teacher{
  public:
    virtual void sayhi()
   {
     cout<<"hi from parent class\n";
   }
    void saybye()
   {
     cout<<"bye from parent class\n";
   }
};

class Student:public Teacher{
    public:
     void sayhi()
     {
       cout<<"hi from child class\n";
     }
     void saybye()
     {
       cout<<"bye from child class\n";
     }
};

int main(){
    Teacher *t1;
    Student s1;
    t1=&s1;     //parent class statement is overridden here
    t1->sayhi(); //Virtual function, binded at runtime so prints child class statements
    t1->saybye();//Non-virtual function, binded at compile time so prints based on the class of the object
    return 0;
}
