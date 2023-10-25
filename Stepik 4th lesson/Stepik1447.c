/*На вход программе подаётся два числа S и E, записанных через пробел. 
При этом гарантируется, что S≤E. 
Программа должна выводить одно случайное число из промежутка [S;E]
Sample Input: 141 273
Sample Output: 233*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 

{
    int S, E;
    scanf("%d %d", &S, &E);
    srand((time)NULL);
    printf("%d", S + rand()%(E-(E-S))); 
    
  return 0;
}