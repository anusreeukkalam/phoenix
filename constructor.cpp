#include <iostream>
using namespace std;

class Student{
  public:
   Student()
   {
     cout<<"deafult constructor invoked\n";
   }

   Student(int a,int b)
   {
     cout<<a<<" "<<b<<" parameterised int,int constructor invoked\n";
   }

   Student(int a,string b)
   {
     cout<<a<<" "<<b<<" parameterised int,string constructor invoked\n";
   }
   
   Student(Student const &obj)
   {
     cout<<"copy constructor invoked\n";
   }

};

int main()
{
    Student s1;
    Student s2(5,10);
    Student s3(20, "Hi");
    Student s4(s3);
    return 0;
}