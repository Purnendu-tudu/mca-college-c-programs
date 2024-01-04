#include <iostream>

using namespace std;

class NumberSwapper {
private:
    int num1, num2;

public:
    NumberSwapper(int a, int b) : num1(a), num2(b) {}

    // Friend function to swap two numbers without using a third variable
    friend void swapNumbers(NumberSwapper &ns);

    // Function to display the numbers
    void displayNumbers() const {
        cout << "Numbers after swapping: " << num1 << " " << num2 << endl;
    }
};

// Friend function definition to swap two numbers without using a third variable
void swapNumbers(NumberSwapper &ns) {
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    NumberSwapper ns(a, b);

    cout << "Original numbers: " << a << " " << b << endl;

    // Calling the friend function to swap numbers
    swapNumbers(ns);

    // Displaying the numbers after swapping
    ns.displayNumbers();

    return 0;
}
