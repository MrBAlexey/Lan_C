/*Написать программу, вычисляющую площадь треугольника по двум сторонам и углу между ними.

Формат входных данных:
На вход программы поступают три числа a,b,γ.
a,b — вещественные числа, длины сторон треугольника.
γ — угол между сторонами 
a и b, записанный в градусах, вещественное число.

Формат выходных данных:
Одно число -- площадь треугольника со сторонами 
a,b и углом γ. Точность — два знака после запятой.

Число π считать равным 
3.1415926.

Sample Input:

17.77 18.31 168.87
Sample Output:

31.40*/

#include <stdio.h>
#include <math.h>

int main() 

{
    double a, b, alpha, pi, S;
    
    pi = 3.1415926;
    
    scanf("%lf %lf %lf", &a, &b, &alpha);
    
    alpha = alpha * pi / 180; 
    
    alpha = sin(alpha);
     
    S = a*b*alpha/2.0;
     
    printf("%.2lf", S);
    
        
    return 0;
}