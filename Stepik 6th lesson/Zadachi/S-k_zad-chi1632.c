/*Даны три числа. Подсчитать количество положительных среди этих чисел.

Входные данные: Три целых числа: a,b,c.

Выходные данные:
Одно целое число -- количество положительных чисел, среди чисел: a,b,c.
Sample Input: 79 -18 88
Sample Output: 2 */

#include <stdio.h>

int main() 
{
 int a, b, c, A, B, C;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > 0)
    
        A = 1;
        else A = 0;
    
    if (b > 0)
    
        B = 1;
        else B=0;
    
    if (c > 0)
    
        C=1;
        else C=0;
    
    
    printf("%d", A+B+C);
    
  return 0;
}


/*Образцовые решения:

#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d", (a > 0) + (b > 0) + (c > 0));
  return 0;
}


Универсальное решение, не привязанное к количеству чисел.
Сравнение с константой EOF. Заметьте, в середине "o"  в верхнем регистре, 
а вовсе не ноль — это сокращение от «End Of File».

Функция scanf() возвращает либо количество значений, 
считанных согласно форматной строке, либо EOF, 
если считать больше ничего не удалось.

#include <stdio.h>

int main() {
    int abc, i = 0;
    while (scanf("%d", &abc) != EOF)
    {
        if (abc > 0) i++;
    }
    printf("%d", i);   
}


Через условную тернарную операцию

#include <stdio.h>

int main(void) {

  int a , b, c; 
  scanf("%d%d%d", &a, &b, &c);
  
 a =  (a > 0) ? 1 : 0 ;
 b =  (b > 0) ? 1 : 0 ;
 c =  (c > 0) ? 1 : 0 ;

printf("%d\n", a + b + c);

  return 0;
}

*/