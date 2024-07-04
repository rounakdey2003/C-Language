#include<stdio.h>
#include<string.h>

int main(){
    int string_len;
    char string[100];

    printf("Enter any string: ");
    scanf("%[^\n]%*c",string);

    string_len=strlen(string);
    printf("\nLength of string: %d",string_len);

    return 0;
}