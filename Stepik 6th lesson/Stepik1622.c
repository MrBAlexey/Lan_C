#include <stdio.h>
int main(void){
  int a = 2;
  int value = 1;
  scanf("%d", &value);
  
  switch (value)
  {
    case 2 : a = a*value; break;
    case 3 : a = a + value; break;
  }
  printf("result = %d\n", a);  

return(0);
}