#include<stdio.h>
#include<stdlib.h>

void count_vowel_consont(const char *str, int *vowel , int *consonant){
    while(*str != '\0'){
        if(*str == 'A'|| *str =='E'||*str =='I'||*str =='O'||*str =='U'||*str =='a'||*str =='e'||*str =='i'||*str =='o'||*str =='u'){
            *vowel = *vowel +1;
            printf(" %c ",*str);
        }else if(
            *str != 'A'|| *str !='E'||*str !='I'||
            *str !='O'||*str !='U'||*str !='a'||
            *str !='e'||*str !='i'||*str !='o'||*str !='u'||
            *str != ' ' || *str != '.'
            ){
                *consonant = *consonant+1;
        }
        str++;
    }
}

void print_charactes(const char *c){
    while(*c != '\0'){
        //printf("%c", *c);
        c++;
    }
}

int main(){
    //file pointer
    FILE *fp = fopen("demo.txt", "r");
    

    //function pointer
    void (*print_letter)(const char *);
    void (*check_c_v)(const char *, int * , int *);
    print_letter = print_charactes;
    check_c_v = count_vowel_consont;



    if(fp == NULL){
        printf("\nUnable to open  the file");
        exit(EXIT_FAILURE);
    }else{
        int count = 0;  
        int vowel = 0;
        int consonant = 0;
        char buffer[100];
        while(fscanf(fp, "%s", buffer) == 1){
            //print_letter(buffer);
            check_c_v(buffer, &vowel, &consonant);
            //printf("\n");
            count++;
        }

        printf("\nNo of words are: %d ,vowels are %d  consonant are %d\n",count, vowel, consonant);
        
    }

    fclose(fp);
    return 0;
}