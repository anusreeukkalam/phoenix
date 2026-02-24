#include <iostream>
using namespace std;

//class declarations
class Base;

class AnotherClass{
  public: 
  void anotherfunction(Base &obj);
};

//base class definition
class Base{
  private:
    int privatevariable;

  public:
    int publicvariable;

   Base(int privatevariable,int publicvariable){  //constructor
      this->privatevariable=privatevariable;
      this->publicvariable=publicvariable;
   }

   //friend funtion declaration
   friend void AnotherClass::anotherfunction(Base &obj);
};

void AnotherClass::anotherfunction(Base &obj){
   cout<<"private variable is: "<<obj.privatevariable<<endl;
   cout<<"public variable is: "<<obj.publicvariable<<endl;
}

int main(){
    Base b(10,20);
    AnotherClass ac;
    ac.anotherfunction(b);
    return 0;
}