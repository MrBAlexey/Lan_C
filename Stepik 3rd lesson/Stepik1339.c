#include <stdio.h> 
int main(void){

  for (int i=1; i<=5; i++){
    for (int j=1; j<=5; j++)
      printf("%-4d",i*j); //добавлен разделитель в строки -4
    printf("\n");
  }

  return(0);
}