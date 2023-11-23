#include<stdio.h>

typedef long long ll;

void print_prime_upto(ll n){
    int flag = 0;
    for(ll i = 1; i <= n ; i++){
        flag = 0;
        for(ll j = 2 ; j <= n/2 ; j++){
            if(i%j == 0){
                flag++;                
            }
            break;
        }
        if(flag == 0 && i != 1){
            printf("%lld ",i);
        }
    }
    printf("\n");
}

int main(){
    ll num;
    scanf("%lld", &num);
    print_prime_upto(num);
    return 0;
}