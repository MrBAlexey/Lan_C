/*Помогите Шерлоку Холмсу написать программу-визитку.

Программа должна выводить на экран информацию о координатах его дома на Бейкер Стрит.

OUTPUT:
S.Holmes:
51grad 31'25.48" N
0 grad  9'29.93" W

Примечание: не используйте в данной задаче символ табуляции \t*/

#include <stdio.h>

int main(void) 
{
    int lon = 51, minLo = 31, lat = 0, minLa = 9;
    float secLo = 25.48f, secLa = 29.93f;
       
    printf("S.Holmes:\n%dgrad %d\'%.2f\" N",lon = 51, minLo = 31,secLo = 25.48f);
    printf("\n%d grad  %d\'%.2f\" W",lat = 0, minLa = 9,secLa = 29.93f);
  
    return 0;
}
