/*Условное тернарное выражение (тернарная условная операция)?:*/
//ВЛОЖЕНИЕ В ТЕРНАРНОЙ ОПЕРАЦИИ (в практике стараться не использовать)
#include <stdio.h>

int main(void)

{
    int a = 2, b = 3, c = 4;

    int max = (a > b) ? (a > c ? a : c) : (b > c) ? b : c;
   
   /* если (a > b) то(?) (вычисляем что больше а или с), если (a <= b) то(?) (вычисляем, что больше b или с)*/

    printf("max = %d\n", max);

   return 0;
}