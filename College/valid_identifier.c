#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValid(char *str)
{
    int len = strlen(str);

    if (!isalpha(str[0]) && str[0] != '_')
        return 0;

    for (int i = 1; i < len; i++)
    {
        if (!isalnum(str[i]) && str[i] != '_')
            return 0;
    }

    char *keywords[] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
    int n = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(str, keywords[i]) == 0)
            return 0;
    }

    return 1;
}
int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isValid(str))
        printf("%s is a valid identifier.\n", str);
    else
        printf("%s is not a valid identifier.\n", str);

    return 0;
}
