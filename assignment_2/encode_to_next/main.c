#include<stdio.h>


int str_len(char *c){
    int len = 0;
    while(*c != '\0'){
        len++;
        c++;
    }
    return len;

}

int main(){
    char input_string[100], output_string[100];
    int string_len = 0;

    scanf("%[^\n]%*c",input_string);
    string_len = str_len(input_string);
    for(int i = 0; i < string_len; i++){
        if((int)input_string[i] == 57){
            output_string[i] = (char)48;
        }else if((int)input_string[i] == 90){
            output_string[i] = (char)65;
        }else if((int)input_string[i] == 122){
            output_string[i] = (char)100;
        }else if((int)input_string[i] == 32){
            output_string[i] = input_string[i];
        }else{
            output_string[i] = (char)((int)input_string[i] + 1);
        }
    }
    printf("\n");
    for(int i = 0 ; i < string_len; i++){
        printf("%c",output_string[i]);
    }

    return 0;
}