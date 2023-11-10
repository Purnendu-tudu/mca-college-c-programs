#include<stdio.h>

#define  SIZE 10

int main() {
    int elementToSearch;
    int availabeElements[SIZE] = {1,2,3,5,8,2,7,11,14,10};
    int found = 0;

    printf("Enter the Number to Search: ");
    scanf("%d",&elementToSearch);
    for(int i = 0; i < SIZE ; i++){
        if(availabeElements[i] == elementToSearch){
            printf("\nElement FOund at index: %d ",i);
            found = 1;
            continue;
        }
        
    }
    if(found == 0){
        printf("\nElement NOT found");
    }
}
