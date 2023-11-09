#include<stdio.h>


void numberToWords(int number){
    
    //STOCK WORDS FOR CONVERSITION
    char *singleDigit[] = {" ", "ONE" , "TWO", "THREE" , "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    char *twoDigits[] = {" ", " ","TWENTY", "THIRTY", "FORTY", "FIFTY", "SIXTY", "SEVENTY","EIGHTY", "NINETY"};
    char *specialTwoDigits[] = {"TEN", "ELEVEL", "TWELEVE", "THIRTEEN", "FOURTEEN", "FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINETEEN"};

    //EXTRACTING DIGITS
     int thousand = number / 1000;
     int hundread = (number/100) % 10;
     int tens = (number/10) % 10;
     int one = number % 10;


     if(thousand > 0){
        printf(" %s THOUSAND ", singleDigit[thousand]);
     }

     if(hundread > 0) {
        printf(" %s HUNDREAD " , singleDigit[hundread]);

     }

     if(tens > 1){
        printf(" %s %s ", twoDigits[tens], singleDigit[one]);
     }else if(tens == 1){
        printf(" %s ", specialTwoDigits[one]);
     }else{
        printf(" %s", singleDigit[one]);
     }


}


int main(){
    numberToWords(1234);
    return 0;
}