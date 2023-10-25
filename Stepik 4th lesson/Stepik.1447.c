/*Поле для игры в рулетку состоит из ячеек от 0 до N.  На вход программе подаётся одно натуральное число N.

Программа должна выдать случайное число от нуля до N включительно.

Sample Input:
36
Sample Output:
36*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 

{
    int N;
    scanf("%d", &N);
    srand((time)NULL);
    printf("%d", rand()%(N+1)); //важно поместить в скобки, иначе ответ будет неверный
    
  return 0;
}