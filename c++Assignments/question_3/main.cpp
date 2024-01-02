// Write a C++ program to create a class ‘Number_List’, 
// which has separate member functions to create an integer array at run time, 
// to sort given Integer and to find the minimum and maximum of the array.

#include<bits/stdc++.h>

using namespace std;

class Number_List{
    
    
    private:
    int array_size=0 , *user_arr;

    int create_array(int array_size){
        try{
            cout <<"array size: "  <<array_size << endl;
            user_arr = new int[array_size];
            return 0;
        }catch(...) {
            return 1;
        }
    }

    int insert_element_in_array(int index, int element){
        try{
            user_arr[index] = element;
            return 0;
        }catch(...){
            return 1;
        }
    }

    int get_array_elements(int index){
        return user_arr[index];
    }

    

    void sort_the_array(){
        int i , j , minimum;
        for(i = 0 ; i < array_size -1 ; i++){
            minimum = user_arr[i];
            for(j = i+1; j < array_size; j++){
                if(minimum > user_arr[j]){
                    minimum = minimum ^ user_arr[j];
                    user_arr[j] = user_arr[j] ^ minimum;
                    minimum = minimum ^ user_arr[j];
                    user_arr[i] = minimum;
                }
            }
        }
    }

    void find_minimum_maximum(){
        cout << "Minimum of the array is: " << user_arr[0] << endl;
        cout << "Maximum of the array is: "<< user_arr[array_size-1] << endl;
    }

    public:
    
    void init_array(){
        cout << "Enter the Size of the array: ";
        cin >> this->array_size ;
        if(create_array(this->array_size) == 0){
            cout << "Array Creation SuccessFul\n"<<endl;
        }else{
            cout << "Failed to Create an array\n"<<endl;
        }
    }

    void put_element_in_the_array(){
        int element =0;
        cout << "Enter the element for the array: ";
        for(int i = 0 ; i < this->array_size; i++){
            cin >> element;
            if(insert_element_in_array(i,element ) == 0){
                continue;
            }else{
                cout << "Failed to insert Element: " << element << "at index: " << i << endl;
            }
        }
    }

    void show_array(){
        for(int i = 0 ; i < this->array_size ; i++){
            cout << get_array_elements(i) << " ";
        }
        cout << " "<<endl;
    }

    void sorting(){
        cout<< "Sorted Array is: ";
        sort_the_array();
    }

    void show_min_max(){
        sort_the_array();
        find_minimum_maximum();
    }

};


int main(){
    Number_List newList1;
    newList1.init_array();
    newList1.put_element_in_the_array();
    newList1.sorting();
    newList1.show_array();
    newList1.show_min_max();

    return 0;
}