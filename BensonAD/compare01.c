#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool compareto (string a,string b);

int main(void)
{
    string h = get_string("Enter first string: ");
    string k = get_string("Enter second string: ");
    if (compareto(h,k))
    {
        printf("Same!!\n");
    }
    else
    {
        printf("Different!!\n");
    }
}

bool compareto (string a,string b)
{
    if (strlen(a) != strlen(b))
    {
        return false;
    }
    for (int i=0, n = strlen(a); i < n; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
