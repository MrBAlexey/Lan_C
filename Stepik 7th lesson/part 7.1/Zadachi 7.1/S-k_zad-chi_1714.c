/*Вывести через пробел все целые числа из промежутка 
[A,B], (A<B) в обратном порядке: от B до A.
Входные данные: Два целых числа A,B, при этом A<B.
Выходные данные:
Целые числа из промежутка от [A,B], 
записанные через пробел в обратном порядке.
Sample Input: 3 12
Sample Output: 12 11 10 9 8 7 6 5 4 3*/

#include <stdio.h>

int main() 
{
   int sum, K = 0, M = 0;
   scanf("%d %d", &K, &M);

    
    for (int i = M; i > (K - 1); i--)
   {
      printf("%d ", i); 
   }
       
    return 0;
}

/*
 Образцовое решение


C
#include <stdio.h>

int main() { 
  int k, m;
  scanf("%d %d", &k, &m);
  for (int i = m; i >= k; i--) {
      printf("%d ", i);
  }
}


Красивое решение:
#include <stdio.h>

int main() {
  int i, k;
    scanf("%d %d", &i, &k);
    for (; i<=k; printf("%d ", k--));
}
*/