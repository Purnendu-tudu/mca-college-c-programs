#include<stdio.h>
#include<math.h>

int main(){
    int row, cols, arr[100][100];
    double norm = 0.0, sum = 0.0;
    scanf("%d", &row);
    scanf("%d",&cols);
    printf("\n");

    for(int i = 0 ; i < row; i++){
        printf("\n");
        for(int j = 0 ; j < cols; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    for(int i = 0 ; i < row; i++){
        for(int j = 0 ; j < cols; j++){
            sum += arr[i][j] * arr[i][j];
        }
    }

    norm = sqrt(sum);
    printf("\nNorm of the matrxi is: %.2f",norm);
    printf("\n");

    

    return 0;
}