//На вход программы поступает целое трёхзначное число. Напишите программу, которая выводит сумму цифр этого числа.

#include <stdio.h>

int main() 
{
  int inpt, a, b, c, summ;
  scanf("%d", &inpt);
    
  a = inpt % 10;
  b = inpt % 100 / 10;
  c = inpt / 100;
  
  summ = a + b + c;
  
  printf("%d", summ);
     
  return 0;
}