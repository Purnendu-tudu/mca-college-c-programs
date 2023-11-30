#include<stdio.h>

typedef long long ll;

void insertion_sort(ll list[], ll size){
    for(ll i = 1 ; i < size; i++){
        ll temp = list[i];
        ll hole_position = i;
        while(hole_position > 0 && list[hole_position-1] > temp){
            list[hole_position] = list[hole_position-1];
            hole_position = hole_position -1;
        }
        list[hole_position] = temp;
    }

    printf("\n");
    for(ll i = 0; i < size; i++){
        printf("%lld ", list[i]);
    }
    printf("\n");
}



int main(){
    ll number_of_test_case, size;
    scanf("%lld", &number_of_test_case);
    while(number_of_test_case != 0){
        scanf("%lld", &size);
        ll list[size];
        for(ll i = 0 ; i < size ; i++){
            scanf("%lld", &list[i]);
        }
        insertion_sort(list,size);
        number_of_test_case--;
    }

    return 0;
}