#include <stdio.h>
#include <cs50.h>

void cough(int n)
{
  for (int i=0; i<n;i++)
    {
      printf("cough\n");
    }
}

int main(void)
{  
  cough(5);
}
