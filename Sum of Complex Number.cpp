/* Q2 Creating a class complex using operator overloading, in which two object is created, having data members real and image and output of their sum is in the third object. */

// Solution :

#include<iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imaginary;

     void setvalue()
    {
        cin >> real;
        cin >> imaginary;
    }

    void display()
    {
        cout<<real<<"+ i"<<imaginary<<"\n";
    }

    void sum(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imaginary = c1.imaginary + c2.imaginary;
    }
};
int main()
    {
        Complex c1,c2,c3;
    
        cout<<"\n Enter real and imaginary part of 1st complex number :";
        c1.setvalue();
    
        cout<<"\n Enter real and imaginary part of 2nd complex number :" ;
        c2.setvalue();
    
        cout<<"\n Sum of two complex numbers are :" ;
        c3.sum(c1,c2);
    
        c3.display();
    
        return 0;
    }

