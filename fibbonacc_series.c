#include<stdio.h>

int main(){
    int number;
    printf("Series UPto : ");
    scanf("%d", &number);
    int fiboSeries[] = {0 ,1};

    if(number == 0){
        printf("0");
    }else if(number == 1){
        printf("0 1");
    }else{
        printf("0 1");
        for(int i = 1 ; i < number-1 ; i++){            
            int temp = fiboSeries[0] + fiboSeries[1];
            fiboSeries[0] = fiboSeries[1];
            fiboSeries[1] = temp;
            printf(" %d", temp);
    }

    }
    
    
    return 0;
}