#include<stdio.h>


//addition of two matices


int main(){
    int firstMatrice[100][100], secondMatrice[100][100];
    int resultMatrice[100][100];
    int sum = 0;
    int row_1,row_2, col_1, col_2;

    printf("\n Enter The First Matrix m X n: ");
    scanf("%d %d",&row_1, &col_1);

    

    printf("\n Enter The Second Matrix m X n : ");
    scanf("%d %d",&row_2, &col_2);

    if(col_1 != row_2){
        printf("Matrix Multiplication can not be done");
        return 1;
    }


    printf("\nEnter the value for the first Matrix: ");
    for(int i = 0 ; i < row_1 ; i++){
        for(int j = 0 ; j < col_1 ; j++){
            scanf("%d", &firstMatrice[i][j]);
        }
    }



    printf("\nEnter the value for the second Matrix: ");
    for(int i = 0 ; i < row_2 ; i++){
        for(int j = 0 ; j < col_2 ; j++){
            scanf("%d", &secondMatrice[i][j]);
        }
    }


    for(int i = 0 ; i < row_1 ; i++){
        //printf("%d",i);
        for(int j = 0 ; j < col_2 ; j++){
            for(int k = 0;  k < col_1 ; k++){
                //printf("\nfirstMatrice[%d][%d]*secondMatrice[%d][%d]",i,k,k,j);
                sum += firstMatrice[i][k] * secondMatrice[k][j];
            }
            resultMatrice[i][j] = sum;

        }
    }

    printf("\nResult is : \n");

    for(int i = 0 ; i < row_1 ; i++){
        for(int j = 0 ; j < col_2 ; j++){
            printf(" %d ", resultMatrice[i][j]);
        }
        printf("\n");
    }
    


    return 0;



}