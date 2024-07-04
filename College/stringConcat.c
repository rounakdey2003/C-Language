#include<stdio.h>
#include<string.h>

int main(){
    char string1[100],string2[100];

    printf("Enter the first string: ");
    scanf("%[^\n]%*c",string1);

    printf("Enter the second string: ");
    scanf("%[^\n]%*c",string2);

    strcat(string1, string2);
    printf("Concat: %s",string1);

    return 0;
}