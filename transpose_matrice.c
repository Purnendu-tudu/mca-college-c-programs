#include<stdio.h>


int main(){
    int matrix[100][100] , transPoseMatrice[100][100];
    int row , column;

    printf("\n Enter The Matrix dimesion m X n: ");
    scanf("%d %d",&row, &column);

    printf("\nEnter the value for the Matrix: ");

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column ; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column ; j++){
            transPoseMatrice[j][i] = matrix[i][j];
        }
    }
    printf("\n Input Matrix \n");
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column ; j++){
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }


    printf("\n Transpose Matrice");

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column ; j++){
            printf(" %d ", transPoseMatrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}