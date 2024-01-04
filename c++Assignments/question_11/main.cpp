#include <iostream>

using namespace std;

// Function to calculate the reverse of an integer
int reverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Overloaded function to calculate based on character 'ch'
void calculate(int m, char ch) {
    if (ch == 'r') {
        // Reverse the digits of the integer
        int reversed = reverseDigits(m);
        cout << "Reverse of " << m << " is: " << reversed << endl;
    } else if (ch == 'p') {
        // Check if the integer is prime
        if (m > 9 && isPrime(m)) {
            cout << m << " is a prime number." << endl;
        } else {
            cout << m << " is not a prime number or has less than 2 digits." << endl;
        }
    } else {
        cout << "Invalid character. Please enter 'r' or 'p'." << endl;
    }
}

int main() {
    int num;
    char choice;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Enter 'r' to reverse the digits or 'p' to check if it's prime: ";
    cin >> choice;

    calculate(num, choice);

    return 0;
}
