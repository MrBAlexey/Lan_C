/*Задача № 103
5.1 Набор задач для программирования. 9 из 16 шагов пройдено 12 из 23 баллов  получено
Найти частное произведений цифр, соответствующих четным и нечетным разрядам четырехзначного числа.
Входные данные:
Натуральное четырёхзначное число A=a4a3a2a1.
​Выходные данные: Вещественное число х, полученное от деления произведения цифр четных разрядов числа А на произведение цифр нечётных разрядов числа А. Формат вывода 2 знака после запятой.
Sample Input: 3421
Sample Output: 1.50*/

#include <stdio.h>

int main() 

{

int j,a4,a3,a2,a1;

    scanf("%d", &j);
    a4 = j / 1000 % 10; //тысячи
    a3 = j / 100 % 10;  //сотни
    a2 = j / 10 % 10;   //десятки
    a1 = j % 10;        //единицы
    
    double res;
    
    res = (double)(a4 * a2) / (double)(a3 * a1);
    printf("%.2lf", res);
    
    return (0);

}

/*Образцовое решение:

#include <stdio.h>

int main() {
    int n, d1, d2, d3, d4;
    scanf("%i", &n);
    d1 = n%10;      //единицы
    d2 = n/10%10;   //десятки
    d3 = n/100%10;  //сотни
    d4 = n/1000;    //тысячи
    
    printf("%.2f", 1.*d2*d4/(d1*d3));

    1. - это просто короткая запись того, 
    чтобы целое число преобразовать в число с плавающей точкой, 
    чтобы результат в конце получился не int, а float.
    */