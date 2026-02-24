#include <iostream>
using namespace std;

class Complex
{
  private:
     int real;
     int imag;

  public:
    Complex(int r=0, int i=0)//compulsory to initialise the constructor 
     //If no values are provided, the object is initialized with real = 0 and imag = 0.
     //so as to not generate any errors
    {
          real=r;
          imag=i;
    }
    // operators work normally for pre defined data types but
    Complex operator+(Complex &obj)//normally we cant use operators on user defined data types like complex here
    {   //sum is performed on objects here
        //so we use operator overloading for defining sum on objects
        //where the c1 from main fnc is calling object 
        //and c2 is passed as an object
        Complex ans;    // This is automatically called when '+' is used with
        // between two Complex objects
        ans.real = real + obj.real; //real refers to this->real, which means the real part of c1.
        ans.imag = imag + obj.imag; //obj.real refers to the real part of c2.
        return ans;
    }

    void print()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};

int main()
{
    Complex c1(5,14),c2(7,10);
    Complex c3=c1 + c2; // this is seen as c1.operator+(c2)
    c3.print();
    return 0;
}