/*Как и bool2, проверка что у не в диапазоне от 2 до 5*/
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
double y = 10;
bool is_range = y >= -2 && y <=5;
bool not_range = !is_range; 
printf("%d", not_range);
}