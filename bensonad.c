#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your damn name?\n");
    int number = get_int("Enter your age: ");
    printf("Your name is %s and your are is %i\n", name, number);
}
