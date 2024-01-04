// Write a C++ program to find Square of a Number using inline function.
#include<bits/stdc++.h>

using namespace std;

inline int findSqaure(int num){
    return num * num;

}

int main(){

    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Square of: " << number << " is " << findSqaure(number)<<endl;
}