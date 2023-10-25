/*Проверка принадлежности к диапазону от -2 до 5*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
double y = 1.86;
bool is_range = y >= -2 && y <=5;
printf("%d", is_range);
}