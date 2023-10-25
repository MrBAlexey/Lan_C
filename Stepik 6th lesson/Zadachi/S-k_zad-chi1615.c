/*Напишите программу-калькулятор для четырёх основных арифметических действий. 
 
Входные данные: 
Символ действия  
c и два целых числа  a, b  (b!=0) 
 
Выходные данные: 
Одно вещественное число, либо строку ERROR!, если введено недопустимое действие. Формат вывода чисел: два знака после запятой. 
 
Sample Input: 
 
+ 45 23 
Sample Output: 
 
68.00*/


#include <stdio.h>

int main(void){
  int a, b; 
  char c = 'k';
  
  scanf("%c %d %d", &c, &a, &b);

    double res1, res2, res3, res4;
    
    res1 = a + b;
    res2 = a - b;
    res3 = a * b;
    res4 = a / b;
    
    switch(c)
    {
        case '+' : printf("%.2lf",res1);break;
        case '-' : printf("%.2lf",res2);break;
        case '*' : printf("%.2lf",res3);break;
        case '/' : printf("%.2lf",res4);break;
            
        default : printf("ERROR!");break;      
    }

return(0);
}

/*образвцовое решение

#include <stdio.h>

int main() {
    char c; 
    float a, b;
    scanf("%c %f %f", &c, &a, &b);
    switch(c)
    { 
        case '+': printf("%.2f", a+b); break;
        case '-': printf("%.2f", a-b); break;
        case '*': printf("%.2f", a*b); break;
        case '/': printf("%.2f", a/b); break;
        default: printf("ERROR!");
        
    }
   
  // put your code here
  return 0;
}*/

/*Решение от коллег:

int main()
{
    int a,b;
    char c;
    scanf("%c %d %d", &c, &a, &b);

    switch(c)
    {
        case('+') : printf("%.2f",a+b);
        case('-') : printf("%.2f",a-b);
        case('/') : printf("%.2f",a/b);
        case('*') : printf("%.2f",a*b);
        default : printf("ERROR!");
    }
    return 0;
}*/