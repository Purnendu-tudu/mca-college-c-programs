#include<stdio.h>

typedef long long ll;

void do_insertion_sort(ll *a, ll size){
    for(ll i = 0 ; i < size+1 ; i++){
        ll temp = a[i];
        ll hole = i;
        while(hole > 0 && a[hole-1] > temp){
            a[hole] = a[hole-1];
            hole = hole -1;
        }
        a[hole] = temp;
    }
    printf("\nResult: ");
    for(int i = 0 ; i < size+1; i++){
        printf("%lld ", a[i]);
    }
    printf("\n");
}


int main(){
    ll size, element;

    scanf("%lld", &size);
    ll arr[size] , i = size , k = 0;
    while(i!= 0){
        
        scanf("%lld", &arr[k]);
        do_insertion_sort(arr,k);
        k++;        
        

        i--;

    }
    printf("\n");
    
}