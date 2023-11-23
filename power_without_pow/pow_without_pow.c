#include<stdio.h>

typedef long long ll;

ll powfunction(ll num, ll pow){
    ll result = 1;
    for(ll i = 0 ; i < pow ; i++){
        result = result * num;
    }
    return result;
}

int main(){
    ll num , pow, result = 1;
    printf("\nEnter the number: ");
    scanf("%lld", &num);
    printf("\nEnter the power: ");
    scanf("%lld", &pow);

    result = powfunction(num, pow);
    printf("\nResult: (%lld)^%lld = %lld\n",num, pow, result );

    return 0;
}