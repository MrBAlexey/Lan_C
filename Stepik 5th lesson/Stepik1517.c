/*Определить число, полученное выписыванием в обратном порядке цифр заданного целого трехзначного числа. 
Вывод начинается с первой ненулевой цифры.
Натуральное трёхзначное число K
Выходные данные: Число K, записанное в обратном порядке.
Sample Input 1: 248
Sample Output 1: 842
Sample Input 2: 230
Sample Output 2: 32*/

#include <stdio.h>

int main() 
{
int K,a,b,c;
    
    scanf("%d", &K);
    a = (K / 100);
    b = (K/10) % 10;
    c = K % 10;
    printf("%d%d%d",c,b,a);
  
  return (0);
}