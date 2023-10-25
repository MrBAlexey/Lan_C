#include <stdio.h> 
int main(void){
  
  int k = 0, last = 0;

  scanf("%d",&k);

  last = k%10;
  
  switch (last) {
    default:
      printf("0\n");
      break;
    case 1 :
    case 9 : 
      printf("1\n");
      break;
    case 2 :
    case 8 :
      printf("4\n");
      break;
    case 5 : 
      printf("5\n");
      break;
    case 4 :
    case 6 : 
      printf("6\n");
      break;
    case 3 :
    case 7 : 
      printf("9\n");
      break;
  }
  
  return 0;
}