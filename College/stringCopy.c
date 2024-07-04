#include<stdio.h>
#include<string.h>

int main(){
    int string_len1,string_len2;
    char string1[100],string2[100];

    printf("Enter any string: ");
    scanf("%[^\n]%*c",string1);

    strcpy(string2,string1);
    printf("String1 copied to String2: %s",string2);

    return 0;
}