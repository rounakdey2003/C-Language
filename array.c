#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
    char ch;
    FILE *fp;
    fp=fopen("test.txt","w");
    printf("enter the text.press ctrl Z:\n");
    while((ch = getchar())!=EOF){
        putc(ch,fp);
    }
    fclose(fp);
    fp=fopen("test.txt","r");
    printf("text on the file:\n");
    while ((ch=getc(fp))!=EOF){
        if(ch == ',')
            printf("\t\t");
        else
            printf("%c",ch);
    }
    fclose(fp);
    return 0;
}