#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = get_int("Enter first number: ");
    int j = get_int("Enter first number: ");
    if (h==j)
    {
        printf("The are similar!\n");
    }
    else
    {
        printf("They are different!\n");
    }
}
