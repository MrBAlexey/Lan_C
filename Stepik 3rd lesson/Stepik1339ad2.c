#include <stdio.h>
#include <string.h>

int main(void)
{
    char one = '?';
    char two = '\?';
    printf("Compare chars: %d\n", one, two);
    if (one == two)
        {
            printf("It's equal!\n\n");
        }
    else
        {
            printf("It isn't equal!\n\n");
        }   

    char tree[] = "?";
    char four[] = "\?";

    printf("Compare strings: %s - %s\n",tree, four);
    if (strcmp(tree, four) == 0)
    {
        printf("It's eqal!\n");
    }
    else
    {
        printf("It isn't eqal!\n");
    }
    return 0;
}