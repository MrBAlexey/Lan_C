/*Факториал.
Для целого числа k(0≤k≤12) посчитать k!.
Входные данные: Одно целое число (0≤k≤12).
Выходные данные: Значение факториала числа k.
Sample Input: 4
Sample Output: 24*/

#include <stdio.h>

int main() 
{
   int sum = 1, k;
    
   scanf("%d", &k);
    
    for (int i = 1; i <= k; i++)
    {
    sum = sum * i;
    }   
  
    printf("%d", sum);
    
     return 0;
}

/*Образцовое решение

#include <stdio.h>

int main()
{
    int k, counter = 1;
    scanf("%d", &k);
    
    for (int i = 1; i <= k; i++)
    {
        counter *= i;        
    }
    printf("%d", counter);
    
    return 0;
}*/