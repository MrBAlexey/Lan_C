/*Последовательность.
Вывести последовательность чисел, поступившую на вход.

Входные данные:
На вход программы поступает последовательность целых чисел. 
Количество чисел в последовательности заранее неизвестно, 
но зато известно, что в конце последовательности записано число -9999 
и в последовательности всегда есть хотя бы одно число.

Выходные данные:
Вывести все элементы последовательности, кроме заключительного -9999, 
на экран.

Sample Input:

-752 145 -67 402 -905 -109 -759 425 824 658 482 259 -9999
Sample Output:

-752 145 -67 402 -905 -109 -759 425 824 658 482 259*/

#include <stdio.h>

int main() 
{
   int k;
   do 
    {
      scanf("%d", &k);
      if(k != -9999) printf("%d ", k);
    }
    while(k != -9999);
   
    return 0;
}

/*
 Образцовое решение

#include <stdio.h>

int main() {
    int a; scanf("%d", &a);
    while (a!=-9999) {
        printf("%d ", a);
        scanf("%d", &a);
    }
}

#include <stdio.h>

int main() {
    
    int n;

    while (scanf("%d", &n) == 1 && n != -9999)
    {
        printf("%d ", n);
    }
  
    return 0;
}

#include <stdio.h>
int main()
{
  int i;
  while((scanf("%d", &i)!=EOF) && (i!=-9999)) printf("%d ",i);
}
*/