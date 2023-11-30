#include<stdio.h>

typedef long long ll;

void bubble_sort(ll list[], ll size){
    
    for(ll i = 0 ; i < size-1; i++){
        for(ll j = 0; j < size-i-1; j++){
            if(list[j] > list[j+1]){
                ll temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }

    printf("\n");

    for(ll i = 0; i < size; i++){
        printf("%lld ",list[i]);
    }

    printf("\n");

}

int main(){
    ll number_of_test_case, size;
    scanf("%lld",&number_of_test_case);
    while(number_of_test_case != 0){
        scanf("%lld",&size);
        ll list[size];
        for(ll i = 0 ; i < size ; i++){
            scanf("%lld",&list[i]);
        }
        bubble_sort(list, size);
        number_of_test_case--;
    }

    return 0;
}
