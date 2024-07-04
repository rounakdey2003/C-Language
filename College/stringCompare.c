#include<stdio.h>
#include<string.h>

int main(){
    int string_len1,string_len2;
    char string1[100],string2[100];

    printf("Enter any string: ");
    scanf("%[^\n]%*c",string1);
    string_len1=strlen(string1);

    printf("Enter any string: ");
    scanf("%[^\n]%*c",string2);
    string_len2=strlen(string2);

    printf("\nLength of string: %d",string_len1);
    printf("\nLength of string: %d",string_len2);

    if(string_len1>string_len2)
        printf("\n%s have max length",string1);
    else
        printf("\n%s have max length",string2);

    return 0;
}