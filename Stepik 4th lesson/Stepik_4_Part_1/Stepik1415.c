/*если знать диаметр окружности и её длину, 
то можно вычислить приблизительное значение числа 
π.*/

#include <stdio.h>
int main(void)
{
  int diameter=113, length=355;
  float pi=0;
  pi = (float)length/diameter;
  printf("pi = %.5f\n",pi);

  return 0;
}