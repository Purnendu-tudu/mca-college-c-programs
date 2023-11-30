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
    int flag = 0;
    char s1[100] , s2[100];
    scanf("%[^\n]%*c",s1);
    int len = str_len(s1); 
    //printf("%d",len);
    for(int i = len-1 , j = 0; i > 0 ,j <len; i--, j++){
        s2[j] = s1[i]; 

    }
    printf("\n");
    printf("\nReversed: ");
    for(int j = 0; j <= len; j++){
        printf("%c",s2[j]);

    }
    for(int j = 0; j <= len; j++){
        //printf("\n%c %c", s1[j] ,s2[j]);
        if(s1[j] != s2[j]){
            flag = 1;
        }

    }
    if(flag == 0){
        printf("\nPalindrome");
    }else{
        printf("\nNOt a palindrom");
    }
    printf("\n");
}