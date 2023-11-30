#include<stdio.h>
#include<math.h>

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}


float mean(int *list, int size){
    float sum =0;
    for(int i = 0; i < size ; i++){
        sum += list[i];
    }

    return sum/(float)size;
}

int mode(int *list, int size){
    int  previous = 1, flag = 0, mode ;
    for(int i = 0 ; i < size; i++){
        int current = 0;
        for(int j = 0 ; j < size; j++){
            if(list[i] == list[j]){
                current++;
            }
        }
        if(current > previous){
            previous = current;
            mode = list[i];
            flag = 1;
        }
    }
    if(flag == 1){
        return mode;
    }else{
        return 0;
    }
    
}

float cal_sd(int *list, int size){
    float sd_result = 0.0 ;
    float mean_R = mean(list,size);
    for(int i = 0 ; i < size; i++){
        sd_result += pow(list[i] - mean_R , 2);
    }
    return sqrt(sd_result/10);
}

int main(){
    int no_of_testcase, size;
    float mean_r , mode_r , sd_r;
    scanf("%d", &no_of_testcase);
    while(no_of_testcase !=0){
        scanf("%d",&size);
        int list[size];
        for(int i = 0 ; i < size ; i++){
            scanf("%d", &list[i]);
        }

        printf("Mean : %.2f",mean_r = mean(list,size));
        printf("\nMode : %.0f",mode_r = mode(list,size));
        printf("\nSd: %.6f",sd_r = cal_sd(list,size));
        printf("\n");

        no_of_testcase--;
    }
}