#include <stdio.h>

typedef long long ll;

void selection_sort(ll list[], ll size)
{   
    ll temp;

    for(ll i = 0 ; i < size -1 ; i++){
        ll minimum;        
        for (ll j = i+1; j < size; j++){
            minimum = list[i];
            if(minimum > list[j]){
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            
        }
        //printf(" %lld ", mininum);

    }

    

    printf("\n");

    for(ll i = 0 ; i < size ; i++){
        printf("%lld ",list[i] );
    }
    printf("\n");
}

int main()
{   
    ll no_of_test_case , size;
    scanf("%lld", &no_of_test_case);
    while (no_of_test_case != 0){
        scanf("%lld", &size);
        ll list[size];
        for(ll i = 0 ; i < size; i++){
            scanf("%lld", &list[i]);
        }
        selection_sort(list, size);
        no_of_test_case--;
    }
    


    
    return 0;
}