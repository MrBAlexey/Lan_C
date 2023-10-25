/*Условное тернарное выражение (тернарная условная операция)?:*/

#include <stdio.h>

int main(void)

{
   int x = 8;
   printf("x is %s digit\n", (x % 2 == 0) ? "even" : "odd");
/*тернарная операция записана здесь как аргумент у функции printf */
   
   return 0;
}