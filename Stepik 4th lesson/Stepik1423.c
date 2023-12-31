/*Написать программу, вычисляющую расстояние между двумя точками на плоскости.

Формат входных данных:

На вход программы поступают четыре числа x1,y1,x2,y2​
— координаты двух точек на плоскости.
x1,x2,y1,y2 — вещественные числа.

Формат выходных данных:
Одно число -- расстояние между точками (x1,y1) и (х2, у2).
Точность — два знака после запятой.
Sample Input: -70.33 -29.20 9.20 34.09
Sample Output: 101.64*/

#include <stdio.h>
#include <math.h>

int main() 

{
    double x1, y1, x2, y2, res;
    
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
      
    res = sqrt( (pow((x2 - x1), 2))  + (pow((y2 - y1), 2)));
    res = fabs(res);
    
    printf("%.2lf", res);
        
    return 0;
}