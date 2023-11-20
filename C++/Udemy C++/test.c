#include <stdio.h>
#include <stdlib.h>

void reverseStr(char *str);
int getStrlen(char *str);
void myMemcpy(char *to, char *from, int n);


int main(){

    char *str;
    printf("Enter string: ");
    scanf("%s",str);
    reverseStr(str);
    
    return 0;
}

void reverseStr(char *str){

    int len = getStrlen(str);
    char *reversed = malloc(sizeof(char)*(len) + 1);
    myMemcpy(reversed,str,len);

    int j = 0, i = len -1;
    for(;i > -1; i--,j++){
        reversed[j] = str[i];
        printf("%c",reversed[j]);
    }
}

int getStrlen(char *str){
    int len = 0;
    for(;str[len] != '\0'; len++);
    return len;
}

void myMemcpy(char *to, char *from, int n){
    for(int i = 0; i < n; i++) to[i] = from[i];
}