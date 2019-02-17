#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s= get_string("Enter string: ");
    if (!s)
    {
        return 1;
    }
    else
    {
        string p=s;
        p[0]= toupper(p[0]);
        printf("s: %s\n", s);
        printf("t: %s\n", p);
    }
}
