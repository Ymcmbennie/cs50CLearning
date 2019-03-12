#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int *numbers = NULL;
    int capacity = 0;
    
    int size = 0;
    while (true)
    {
        int number = get_int("Number: ");
        
        if (size==capacity)
        {
            numbers = realloc(numbers, sizeof(int)*)
        }
    }
}
