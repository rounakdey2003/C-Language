#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidComment(char *statement)
{

    int len = strlen(statement);


    if (len == 0)
        return false;


    if (statement[0] == '/' && statement[1] == '/')
    {

        for (int i = 2; i < len; i++)
        {

            if (statement[i] == '\n')
                return true;
        }

        return false;
    }


    if (statement[0] == '/' && statement[1] == '*')
    {

        for (int i = 2; i < len - 1; i++)
        {

            if (statement[i] == '*' && statement[i + 1] == '/')
                return true;
        }

        return false;
    }


    return false;
}


int main()
{

    char statement[100];


    printf("Enter a statement: ");
    fgets(statement, 100, stdin);


    if (isValidComment(statement))
        printf("%s is a valid comment.\n", statement);
    else
        printf("%s is not a valid comment.\n", statement);

    return 0;
}
