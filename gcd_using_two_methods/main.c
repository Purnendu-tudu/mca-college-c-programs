#include<stdio.h>

typedef long long ll;

ll gcd_using_euclidean(ll a, ll b){
    if(b==0){
        return a;
    }

    return gcd_using_euclidean(b, a%b);
}

ll gcd_using_factorial(ll a, ll b){
    ll min = (a<b) ? a :b;
    ll gcd = 1;

    for(ll i= 0 ; i <= min ; i++){
        if(a%i == 0 && b%i == 0){
            gcd = i;
        }
    }
    
    return gcd;

}

int main(){
    ll a , b ;
    scanf("%lld", &a);
    scanf("%lld", &b);

    printf("\nGCD using Eucledian Algo: %lld and %lld is %lld\n", a,b,gcd_using_euclidean(a,b));
    printf("\nGCD using Factorial: %lld and %lld is %lld\n", a,b,gcd_using_euclidean(a,b));
}
