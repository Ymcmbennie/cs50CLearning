#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *a = get_string("Enter first string: ");
    if (a==NULL)
    {
        return 1;
    }
    char *b = get_string("Enter second string: ");
    if (b == NULL)
    {
        return 1;
    }
    if (strcmp(a,b)==0)
    {
        printf("same!! \n");
    }
    else
    {
        printf("Different!!! \n");
    }
}
