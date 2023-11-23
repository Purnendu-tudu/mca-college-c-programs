#include<stdio.h>
#include<stdbool.h>

typedef long long ll;

bool reverse_is_plaindrome(ll num){
    ll reverse = 0, remainder = 0, actual =0;
    actual = num;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("\n%lld -> in  Reverse -> %lld", actual ,reverse);

    if((reverse - actual) != 0){
        return false;
    }else{
        return true;
    }
    
}

int main() {
    ll number;
    scanf("%lld", &number);

    if(reverse_is_plaindrome(number) == true){
        printf("\nTRUE\n");
    }else{
        printf("\nFALSE\n");
    }


    return 0;
}