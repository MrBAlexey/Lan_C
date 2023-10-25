/*Прверить что y не входит в диапазон от -2 до 5*/
#include <stdio.h>
#include <stdbool.h>

int main (void)

{
double y = 10.0;
int not_range = y <= -2 || y >= 5;

printf("%d", not_range);
}