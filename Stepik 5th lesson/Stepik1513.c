/*#94
Идёт k секунда суток. Определить, сколько целых часов и целых минут будут 
показывать электронные часы, если на 0-ой секунде они показывают 0 0.
Sample Input: 34961
Sample Output: 9 42*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int sec, hours, min;
    
    scanf("%d", &sec);
    hours = sec / 3600; 
    min = (sec / 60) % 60;
    printf("%d %d", hours, min);

    return 0;
}