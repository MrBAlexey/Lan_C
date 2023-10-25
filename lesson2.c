#include <stdio.h>
#include <stdbool.h>

int main()
{
    float x, y, res;
    scanf("%f", &x);
    scanf("%f", &y);

    res = x / y;
    printf("Result: %.2f\n", res);
    
    return 0;
}