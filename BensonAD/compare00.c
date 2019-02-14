#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string h = get_string("Enter first number: ");
    string j = get_string("Enter first number: ");
    if (strlen(h)!=strlen(j))
    {
        printf("The are not similar!\n");
    }
    else
    {
        printf("They are different!\n");
    }
}
