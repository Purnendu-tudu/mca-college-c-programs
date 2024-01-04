#include <iostream>
#include <string>

using namespace std;

class ReverseConcatenation {
private:
    string str;

public:
    ReverseConcatenation() {
        str = "";
    }

    ReverseConcatenation(string s) {
        str = s;
    }

    // Overloading '+' operator for concatenation
    ReverseConcatenation operator+(const ReverseConcatenation& other) const {
        return ReverseConcatenation(str + other.str);
    }

    // Function to reverse the string
    void reverseString() {
        int start = 0;
        int end = str.length() - 1;

        while (start < end) {
            swap(str[start], str[end]);
            start++;
            end--;
        }
    }

    // Function to display the concatenated and reversed string
    void display(){
        cout << "Concatenated String: " << str << endl;
        reverseString();
        cout << "Reversed Concatenated String: " << str << endl;
    }
};

int main() {
    string s1, s2;

    cout << "Enter the first string: ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    ReverseConcatenation strObj1(s1);
    ReverseConcatenation strObj2(s2);

    ReverseConcatenation result = strObj1 + strObj2;

    result.display();

    return 0;
}
