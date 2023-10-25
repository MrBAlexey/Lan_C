#include <stdio.h>
#include <math.h>

int main(void)
{
    int S;

        for(int i = -3; i <= 7; i++)
        {
            for(int j = 1; j <= 5; j++)
            {
                for(int k = 2; k <= 4; k++)   
                {
                    S += pow((i + j - k), 2);
                }            
            }
        }

    printf("S = %d", S);   // S = 2750 

    return 0;
}