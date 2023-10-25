/*5.1 Набор задач для программирования. 11 из 16 шагов пройдено 14 из 23 баллов  получено
Побитовая инверсия
Напишите программу, которая осуществляет инверсию однобитного числа (0 или 1).

Входные данные:
Число K либо 0, либо 1.

Выходные данные:
Вывести 1, если K=0
вывести 0, если K=1
Sample Input 1: 0
Sample Output 1: 1
Sample Input 2: 1
Sample Output 2: 0*/

#include <stdio.h>
#include <math.h>

int main() 

{
    int K, a;
       
    scanf("%d", &K);
    
    a = (K + 1) % 2; 
    
    printf("%ld",a);
  
  return (0);
}

/*Образцовое решение "Чёртов гений!"

#include <stdio.h>

int main() {
  int K;
  scanf("%d", &K);
  printf("%d", 1-K);
  return 0;
}*/