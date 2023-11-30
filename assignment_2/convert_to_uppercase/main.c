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
    char input_str[100];
    scanf("%[^\n]%*c", input_str);
    int len = str_len(input_str);
    for(int i = 0 ; i < len ; i++){
        if( (int)input_str[i] < 123 && (int)input_str[i] > 96){
            input_str[i] = (char)((int)input_str[i] - 32);
        }
    }

    for(int j = 0; j <= len; j++){
        printf("%c",input_str[j]);

    }
    return 0;
}