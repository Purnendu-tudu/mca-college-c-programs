#include<stdio.h>



int main(){
    int row, column, matrix[100][100], result_matrxi[100][100];
    scanf("%d",&row);
    scanf("%d",&column);

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column; j++){
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    for(int i = 0 ; i < column; i++){
        for(int j = 0 ; j < row; j++){
            result_matrxi[i][j] = matrix[j][i];
        }
    }

    printf("\nTranspose: \n");

    for(int i = 0 ; i < column; i++){
        for(int j = 0 ; j < row; j++){
            printf("%d ",result_matrxi[i][j]);
            
        }
        printf("\n");
    }

}