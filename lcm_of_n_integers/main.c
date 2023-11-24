#include<stdio.h>

typedef long long ll;


ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

ll lcm(ll a, ll b){
    return (a*b) / gcd(a,b);
}

ll calculateLcm(ll arr[], ll n){
    ll result = arr[0];
    for(ll i = 0 ; i < n ; i++){
        result = lcm(result, arr[i]);
    }
    return result;
}

int main(){
    ll no_of_integers;
    scanf("%lld", &no_of_integers);

    ll numbers[no_of_integers];
    for(ll i = 0 ; i < no_of_integers ; i++){
        scanf("%lld", &numbers[i]);
    }

    printf("\nLcm of inputed integers are: %lld\n", calculateLcm(numbers,no_of_integers));
    return 0;
}