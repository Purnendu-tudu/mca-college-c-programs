// Write a C++ program to demonstrate
// (A) Copy Constructor (B) Parameterized Constructor (C) Virtual destructor

#include<bits/stdc++.h>

using namespace std;

class Aclass{
    private:
    string fristName, middleName, lastName;

    public:
    Aclass(const Aclass &t){
        this->fristName = t.fristName;
        this->middleName = t.middleName;
        this->lastName = t.lastName;
    }

    Aclass(string first_name, string middle_name, string last_name){
        this->fristName = first_name;
        this->middleName = middle_name;
        this->lastName = last_name;
    }

    ~Aclass(){
        cout << "Called Inside Virtual Destructor"<<endl;
        cout << "First Name: "<<this->fristName<<endl;
        cout << "Middle Name: "<<this->middleName<<endl;
        cout << "Last Name: "<<this->lastName<<endl;
    
    }
};

int main(){
    Aclass class1 = Aclass("Rohit", "Tan", "Lee");
    Aclass class2 = class1;
    return 0;
}