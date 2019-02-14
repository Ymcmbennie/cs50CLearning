#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string s = get_string("Enter input string:  ");
    printf("Output:\n");
    for (int i = 0; i<strlen(s);i++)
    {
        printf("%c\n", s[i]);
        eprintf("Benson Sanga has made it work\n");
    }
}
