#include<stdio.h>
#include<math.h>

int armStrongNumber(double numberToCheck){
    int quotient, remainder, result = 0, index;
    double length = log10(numberToCheck) + 1;
    // printf("The Lenght of the number is : %d", (int)length);
    int digits[(int)length];
    index = (int) length -1;
    
    quotient = (int)numberToCheck;

    while (quotient != 0)
    {        
        remainder = (int) quotient % 10;
        digits[index] = remainder;

        quotient = quotient / 10;
        index --;
    }

    for(int i = 0 ; i < (int) length ; i++){
        //printf(" %d "  , (int)pow(digits[i], (int) length));
        result  += (int)pow(digits[i], (int) length);
    }
    
    //printf("\n%d", result);

    if(result == (int)numberToCheck){
        return 0;
    }else{
        return 1;
    }
    

}

int main(){
    int result = armStrongNumber(153);
    printf("\nResult : %d\n", result);
    return 1-1;
}