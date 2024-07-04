#include<stdio.h>
#include<string.h>

int main(){
    char string[100],stringRev;

    printf("Enter the string: ");
    scanf("%[^\n]%*c",string);

    stringRev = (char) strrev(string);
    printf("Reverse is: %s",string);

    return 0;
}