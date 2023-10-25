/*Написать программу выводящую на экран первые N натуральных чисел.
Входные данные:
Одно  целое число N>0
Выходные данные: Первые N натуральных чисел, записанных через пробел.
Sample Input: 8
Sample Output: 1 2 3 4 5 6 7 8*/

#include <stdio.h>

int main() {
    int res=0, N = 0;
   scanf("%d", &N);
    
   
   for (int i = 0; i < N; i++)
   {
       res = res + 1;
    printf("% d", res);   
   }
       
    return 0;
}

/*Образцовое решение:
#include <stdio.h>

int main() {
    int n,k;
    scanf("%d", &n);
    for (k=1; k<=n; k=k+1){
        printf("%d ", k);
    }
    return 0;
}

Красиво и компактно:

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; ++i <= n; printf("%d ", i));
    return 0;
}

ШКОЛА 21! соласно стандартов (оформление не исправлено)

#include <stdio.h>
int main(void) 
    
{
    int num;
    int i;
    
    scanf("%d",&num);
    i=0;
    
    while (i < num)
    {
        i++;
        printf("%d ",i);
    }
    return (0);
}

*/