#include <iostream>

using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Friend function to add two complex numbers
    friend Complex addComplex(const Complex &c1, const Complex &c2);

    // Function to display the complex number
    void displayComplex() const {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition to add two complex numbers
Complex addComplex(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    float real1, imag1, real2, imag2;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    Complex c1(real1, imag1);
    Complex c2(real2, imag2);

    // Calling the friend function to add two complex numbers
    Complex result = addComplex(c1, c2);

    // Displaying the result
    result.displayComplex();

    return 0;
}
