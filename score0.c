#include <stdio.h>
#include <cs50.h>

void chart(int count, int scores[]);

int main(void)
{
    int score1 = get_int("Score 1: ");
    int score2 = get_int("Score 2: ");
    int score3 = get_int("Score 3: ");
    int scores[]={score1,score2,score3};   
    chart(3,scores);
}


void chart(int count, int scores[])
{
    for (int i=0;i<count;i++)
    {
        printf("Score %i ",i);
        for (int j=0;j<scores[i];j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    
    
}
