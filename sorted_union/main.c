#include<stdio.h>

typedef long long ll;

void do_sorting(ll arr1[], ll arr2[], ll size1, ll size2){
   ll result[size1 + size2];
   ll i = 0 , j = 0 , k = 0;

   while(i < size1 && j < size2){
    if(arr1[i] < arr2[j]){
        result[k++] = arr1[i++];
    }else if(arr1[i] > arr2[j]){
        result[k++] = arr2[j++];
    }else{
        result[k++] = arr1[i++];
    }

   }

   while(i< size1){
    result[k++] = arr1[i++];
   }

   while(j < size2){
    result[k++] = arr2[j++];
   }

   printf("\n"); 
   for(ll i = 0 ; i < k ; i++){
    printf("%lld ", result[i]);
   }
   printf("\n");
}


int main(){
    ll size1, size2;
    scanf("%lld",&size1);
    scanf("%lld",&size2);

    ll arr1[size1], arr2[size2];

    for(ll i = 0 ; i < size1 ; i++){
        scanf("%lld",&arr1[i]);
    }

    for(ll i = 0 ; i < size2; i++){
        scanf("%lld", &arr2[i]);
    }

    do_sorting(arr1, arr2, size1, size2);
}