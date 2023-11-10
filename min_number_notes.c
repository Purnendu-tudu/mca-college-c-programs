
#include<stdio.h>
#define SIZE 7


int main(){
    int amountToCheck;
    int notesAvailable[SIZE] = {1,2,5,10,20,50,100};
    int noteCount[SIZE];
    
    int minMumNOteRequired = 0;

    printf("\nENter the amount to check: ");
    scanf("%d", &amountToCheck);
    int currentAmount = amountToCheck;

    for(int i = SIZE-1; i >= 0; i --){
        noteCount[i] = currentAmount / notesAvailable[i];
        minMumNOteRequired += noteCount[i];
        currentAmount = currentAmount%notesAvailable[i];
        
    }
    for(int i = 0; i < SIZE ; i++){
        printf("%d Ruppes %d\n", notesAvailable[i],noteCount[i]);
    }

    printf("Minimum Notes Required:  %d", minMumNOteRequired);

    return 0;


}