#include<stdio.h>

typedef long long ll;

void do_insertion_sort(ll *a, ll size){
    for(ll i = 0 ; i < size ; i++){
        ll temp = a[i];
        ll hole = i;
        while(hole > 0 && a[hole-1] < temp){
            a[hole] = a[hole-1];
            hole = hole -1;
        }
        a[hole] = temp;
    }
}

int main(){
    ll test_caste, size;
    scanf("%lld", &test_caste);
    while(test_caste != 0){
        scanf("%lld",&size);
        ll a[size];
        for(ll i = 0 ; i < size ; i++){
            scanf("%lld",&a[i]);
        }
        do_insertion_sort(a,size);

        printf("\n");
        for(ll i = 0 ; i< size ; i++){
            printf("%lld ", a[i]);
        }
        printf("\n");

        test_caste--;
    }
}