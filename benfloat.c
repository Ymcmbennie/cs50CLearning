#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x:");
    int y = get_int("y: ");
    
    printf(
        "So x=%i and y=%i \n Then,\n x+y= %i\n x-y= %i\n x/y= %i\n x * y= %i\n",
        x,
        y,
        x+y,
        x-y, 
        x/y, 
        x*y
    );
}
