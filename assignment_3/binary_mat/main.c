#include<stdio.h>
#include<stdlib.h>


int main(){
    FILE *file = fopen("binary_matrix.txt","r");
    FILE *outputfile = fopen("ouput.txt","w");
    if(file == NULL){
        printf("\nFailed to open file");
        return -1;
    }else{
        int row = 0;
        int column = 0;
        int element = 0;
        int ch;
        while((ch = fgetc(file)) !=EOF){
            if(ch == '\n'){
                row++;
            }else if(ch == '0' || ch == '1'){
                element++;
            }
        }
        column = element / row;

        printf("\nrows:%d  , columns: %d\n",row, column);
        rewind(file);

        //be safe here
        int **dynamicArray = (int **)malloc(row * sizeof(int));

        if(dynamicArray == NULL){
            printf("\nMemory Allocation Failed");
            return 1;
        }

        for(int i = 0 ; i < row ; i++){
            dynamicArray[i] = (int *)malloc(column * sizeof(int));

            if(dynamicArray[i] == NULL){
                printf("\nMemory Allocation Failed");
                for(int j = 0 ; j < i ; j++){
                    free(dynamicArray[j]);
                }
                free(dynamicArray);
            }
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (fscanf(file, "%d", &dynamicArray[i][j]) != 1) {
                    printf("Error reading from file.\n");
                
                    for (int k = 0; k <= i; k++) {
                        free(dynamicArray[k]);
                    }
                    free(dynamicArray);
                
                    fclose(file);
                    return 1;
                }
            }
        }

        for(int i = 0 ; i < row; i++){
            int sum = 0;
            for(int j = 0 ; j < column ; j++){
                // printf("%d ", dynamicArray[i][j]);
                sum += dynamicArray[i][j];
            }
            printf("Row:%d --->Sum--> %d", i+1, sum);
            fprintf(outputfile, "Row:%d --->Sum--> %d\n", i + 1, sum);

            printf("\n");
        }





    }

    fclose(file);
    fclose(outputfile);


    return 0;
}