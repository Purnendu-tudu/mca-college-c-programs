// Print the pattern using class and objects
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *

#include<bits/stdc++.h>

using namespace std;

class PrintPatterns{
    private:
    int rows;

    public:
    PrintPatterns(int rows){
        this->rows = rows;
    }


    void print(){
        for(int i = rows; i > 0 ; i--){
            //this is for space
            for(int j = 0 ; j < rows - i; j++){
                cout << " ";
            }
            //this is for star
            for(int k = 0 ; k < 2 * i -1 ; k++){
                cout << "*";
            }
            cout<<endl;
        }
    }
};

int main(){
    PrintPatterns pa1 = PrintPatterns(6);
    pa1.print();
    return 0;
}