#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) { 
  
  srand(time(NULL));
// счётчики для сгенерированых чисел
// если выпадет 1, то увеличим на единицу count_1
  int count_0 = 0, count_1 = 0, count_2 = 0;

  int rand_number;
  
  rand_number = rand()%3;  
  switch (rand_number){
    case 0 : count_0 = count_0 + 1; break;
    case 1 : count_1 = count_1 + 1; break;
    case 2 : count_2 = count_2 + 1; break;
  }

  rand_number = rand()%3;  
  switch (rand_number){
    case 0 : count_0 = count_0 + 1; break;
    case 1 : count_1 = count_1 + 1; break;
    case 2 : count_2 = count_2 + 1; break;
  }

  rand_number = rand()%3;  
  switch (rand_number){
    case 0 : count_0 = count_0 + 1; break;
    case 1 : count_1 = count_1 + 1; break;
    case 2 : count_2 = count_2 + 1; break;
  }

  rand_number = rand()%3;  
  switch (rand_number){
    case 0 : count_0 = count_0 + 1; break;
    case 1 : count_1 = count_1 + 1; break;
    case 2 : count_2 = count_2 + 1; break;
  }

  rand_number = rand()%3;  
  switch (rand_number){
    case 0 : count_0 = count_0 + 1; break;
    case 1 : count_1 = count_1 + 1; break;
    case 2 : count_2 = count_2 + 1; break;
  }

  rand_number = rand()%3;  
  switch (rand_number){
    case 0 : count_0 = count_0 + 1; break;
    case 1 : count_1 = count_1 + 1; break;
    case 2 : count_2 = count_2 + 1; break;
  }

  rand_number = rand()%3;  
  switch (rand_number){
    case 0 : count_0 = count_0 + 1; break;
    case 1 : count_1 = count_1 + 1; break;
    case 2 : count_2 = count_2 + 1; break;
  }

  rand_number = rand()%3;  
  switch (rand_number){
    case 0 : count_0 = count_0 + 1; break;
    case 1 : count_1 = count_1 + 1; break;
    case 2 : count_2 = count_2 + 1; break;
  }

  rand_number = rand()%3;  
  switch (rand_number){
    case 0 : count_0 = count_0 + 1; break;
    case 1 : count_1 = count_1 + 1; break;
    case 2 : count_2 = count_2 + 1; break;
  }

  rand_number = rand()%3;  
  switch (rand_number){
    case 0 : count_0 = count_0 + 1; break;
    case 1 : count_1 = count_1 + 1; break;
    case 2 : count_2 = count_2 + 1; break;
  }

  printf("0 - %d\n1 - %d\n2 - %d\n", count_0, count_1, count_2);

  return 0;
}