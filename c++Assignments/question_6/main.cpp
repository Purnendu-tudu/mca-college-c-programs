// Write a C++ Program using constructor 
// and destructor for checking if the given year is leap year or not.

#include<bits/stdc++.h>

using namespace std;

class LeapYear{
    private:
    int year;

    int check_year(){
        if(year%400 == 0 || year%100 != 0 && year%4 == 0){
            return 1;
        }else{
            return 0;
        }
    }
    public:
    LeapYear(int year){
        this->year = year;
    }

    ~LeapYear(){
        if(check_year()== 1){
            cout << "Its a Leap Year: "<< this->year<<endl;
        }else{
            cout << "Its not a Leap Year: "<<this->year<<endl;
        }
    }
};


int main(){
    LeapYear year1 = LeapYear(2000);
    LeapYear year2 = LeapYear(2002);
    return 0;
}