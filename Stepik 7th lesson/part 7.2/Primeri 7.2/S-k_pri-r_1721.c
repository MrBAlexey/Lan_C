/*Синтаксис данной циклической конструкции таков:

Листинг 4.

do 
  оператор;
while (условие);
Работает эта конструкция следующим образом:

Программа встречает ключевое слово do. Значит перед ней цикл do-while;
Выполняется тело цикла;
Проверяется условие;
Если условие ИСТИНА,то снова выполняется тело цикла;
Если условие ЛОЖЬ, то работа циклической конструкции прекращается. 
Программы выполняет оператор, следующий за циклом do-while.
Давайте перепишем нашу программу с использованием данного типа циклической конструкции*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {   
  srand(time(NULL));

  printf("###########  Devil\'s bones   ###########\n");
  printf("#                                      #\n");
  printf("#   Commands:                          #\n");
  printf("#                                      #\n");
  printf("#   1 - new game                       #\n");
  printf("#   0 - exit                           #\n");
  printf("#                                      #\n");
  printf("########################################\n\n");
  
  int ch_control;
  int value = 0;

  do {
    printf("Input command: ");
    scanf("%d", &ch_control);

    switch(ch_control){
      case 0: break;
      case 1:
        value = 1 + rand()%6;
        printf("Result: %d\n", value);
        break;
      default: 
        printf("Error! Try again...\n");
        break;
    }
  }while(ch_control != 0);

  printf("Good bye!\n");
  return 0;
}
