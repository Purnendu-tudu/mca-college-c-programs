#include<stdio.h>
#include<stdlib.h>

double celciusToFarenheit(double celcius){
    return (celcius*(9.0/5.0)) + 32;
}

double farenheitToCelcius(double farenheit){
    return ((farenheit - 32) * (5.0/9.0));
}


int main(){
    int temparature, choice;

    while(1){
        printf("\n=========TEMPERATURE CONVERSION=========");
        printf("\n1. CELSIUS TO FRENHEIT CONVERSION");
        printf("\n2. FARENHEIT TO CELCIUS");
        printf("\n0. PRESS 0 TO EXIT");
        printf("\n\n Enter your choice:|> ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            /* code */
            printf("\nEnter the Celsius value: ");
            scanf("%d", &temparature);
            printf("\nFarenheit is: %.2f °F",celciusToFarenheit(temparature));
            printf("\n");
            break;
        case 2:
            printf("\nEnter the Farenheit value: ");
            scanf("%d", &temparature);
            printf("\nCelsius is: %.2f °C",farenheitToCelcius(temparature));
            printf("\n");
            break;
        case 0:
            exit(0);

        default:
            break;
        }
    }


    return 0;
}