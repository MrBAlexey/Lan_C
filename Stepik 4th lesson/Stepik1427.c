/* задание №73 
В выражении a/b*c/d*e/f*h расставить скобки так, 
чтобы выражению со скобками соответствовала дробь
Входные данные: семь целых чисел a,b,c,d,e,f и h соответственно.
Выходные данные: результат выражения. Точность  2 знака после запятой.
Источник: С.А. Абрамов, Е.В. Зима "Начало программирования на языке Паскаль"
Sample Input: 7 2 3 7 8 3 4
Sample Output: 5.44 */

#include <stdio.h>
#include <math.h>

int main() 

{
    double a, b, c, d, e, f, h, res;
    
    scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &h);
    
    res = a/(b*(c/(d*(e/(f*h)))));
     
    printf("%.2lf", res);
    
    return 0;
}



