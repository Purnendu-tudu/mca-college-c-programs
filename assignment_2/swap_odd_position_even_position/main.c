#include<stdio.h>

typedef long long ll;

void do_swaping(ll *list, ll size){
    
    for(ll i = 1 ; i < size; i = i + 2){
        ll temp;
        temp = list[i];
        list[i] = list[i-1];
        list[i-1] = temp;
    }
}

int main(){
    ll test_case, size;
    scanf("%lld", &test_case);
    while(test_case != 0){
        scanf("%lld", &size);
        ll list[size];
        for(ll i = 0 ; i < size; i++){
            scanf("%lld",&list[i]);
        }
        do_swaping(list, size);
        for(ll i = 0 ; i < size; i++){
            printf("%lld ",list[i]);
        }
        
        test_case--;
        printf("\n");
    }
    return 0;
    


}