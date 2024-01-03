// Write a C++ program to create a class complex having two integers real and imaginary. 
// Create a three constructors function taking no argument, 
// one argument and two arguments for three constructors. 
// Show () and sum() functions are member functions, 
// displaying and finding the addition of two objects respectively.

#include<bits/stdc++.h>

using namespace std;

class Complex{
    public:
    int real, imaginary;

    Complex(){
        this->real = 1;
        this->imaginary = 2;
    }

    Complex(int real){
        this->real = real;
    }

    Complex(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    void show(){
        cout<< "Complex Number: " << this->real <<" + " << this->imaginary<<"i"<<endl;
    }

    void sum(Complex c1 , Complex c2){
        this->real = c1.real + c2.real;
        this->imaginary = c1.imaginary + c2.imaginary;
    }
};


int main(){
    Complex c3;
    Complex c1 = Complex(2,3);
    Complex c2 = Complex(3,6);
    c1.show();
    c2.show();
    c3.sum(c1,c2);
    cout << "Addition Of two complex number is: "<<endl;
    c3.show();


    return 0;

}