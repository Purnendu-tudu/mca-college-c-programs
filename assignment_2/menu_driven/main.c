// len cpy cat rev cmp

#include<stdio.h>

int str_len(char *c){
    int len = 0;
    while(*c != '\0'){
        len++;
        c++;
    }
    return len;

}

int main(){

    int choice;
    do{
        printf("\nChoose an option.\n1.String len.\n2.String cpy.\n3.String cat.\n4.String rev.\n5.String compare.\nEnter 0 to exit.");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            /* code */
            break;
        
        default:
            printf("\nEnter a vlaid Choice... :(");
        }


    }while(choice != 0);
    

    return 0;
}