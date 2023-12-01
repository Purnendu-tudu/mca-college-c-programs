#include<stdio.h>

void short_row_wise(int (*arr)[3], int rows, int cols){
    for(int i = 0 ; i < rows; i++){
        for(int j = 0 ; j < cols -1; j++){
            for(int k = 0 ; k < cols -j -1; k++){
                if(arr[i][k] > arr[i][k+1]){
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k+1];
                    arr[i][k+1] = temp;
                }
            }
        }
    }
}

void short_col_wise(int (*arr)[3], int rows, int cols){
    for(int i = 0 ; i < cols; i++){
        for(int j = 0 ; j < rows -1; j++){
            for(int k = 0 ; k < rows -j -1; k++){
                if(arr[k][i] > arr[k+1][i]){
                    int temp = arr[k][i];
                    arr[k][i] = arr[k+1][i];
                    arr[k+1][i] = temp;
                }
            }
        }
    }
}

int main(){
    int row = 3, col = 3;
    int arr1[3][3]= {
        {7,4,5},
        {1,3,2},
        {6,2,1}

    };

    int arr2[3][3]= {
        {8,4,0},
        {1,3,2},
        {6,7,1}

    };

    int sum_array[3][3];


    short_row_wise(arr1,row,col);
    short_col_wise(arr1, row, col);

    short_row_wise(arr2,row,col);
    short_col_wise(arr2, row, col);

    for(int i = 0 ; i < row; i++){
        printf("\n");
        for(int j = 0 ; j < col ; j++){
            printf("%d ",arr1[i][j]);
        }
    }
    printf("\n");

    for(int i = 0 ; i < row; i++){
        printf("\n");
        for(int j = 0 ; j < col ; j++){
            printf("%d ",arr2[i][j]);
        }
    }
    printf("\n");

    for(int i = 0 ; i < row; i++){
        for(int j = 0 ; j < col; j++){
            sum_array[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    printf("Before Sort the sum result is: \n");
    for(int i = 0 ; i < row; i++){
        printf("\n");
        for(int j = 0 ; j < col ; j++){
            printf("%d ",sum_array[i][j]);
        }
    }
    printf("\n");

    short_row_wise(sum_array,row,col);
    short_col_wise(sum_array, row, col);

    printf("After Sort the sum result is : \n");
    for(int i = 0 ; i < row; i++){
        printf("\n");
        for(int j = 0 ; j < col ; j++){
            printf("%d ",sum_array[i][j]);
        }
    }
    printf("\n");


    return 0;




}