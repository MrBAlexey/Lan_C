#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {   
  srand(time(NULL));
// счётчики для сгенерированных чисел
// если выпадет 0, то увеличим на единицу count_0
// аналогично для count_1 и count_2
  int count_0 = 0, count_1 = 0, count_2 =0;

  int rand_number;
  
  // i = 0 начинаем отсчёт с нуля
  // i < 100 повторяем, пока i меньше 100
  // i = i + 1 на каждом шаге увеличиваем счётчик на единицу
  // итого тело цикла выполнится 100 раз
  for (int i = 0; i < 100; i = i + 1){
    rand_number = rand()%3;  
    switch (rand_number){
      case 0 : count_0 = count_0 + 1; break;
      case 1 : count_1 = count_1 + 1; break;
      case 2 : count_2 = count_2 + 1; break;
    }
  }

  printf("0 - %d\n1 - %d\n2 - %d\n", count_0, count_1, count_2);
  return 0;
}

/* Опишем подробно алгоритм работы цикла for.

Программа встречает ключевое слово for, а значит дальше идёт циклическая конструкция.
Сначала создаётся переменная счетчик (выражение 1).
Проверяется условие выполнение цикла (выражение 2).
Если условие ЛОЖЬ, то программа выходит из цикла for и продолжает свое выполнение.
Если условие ИСТИНА, то выполняется тело цикла.
Когда тело цикла выполнится, программа возвращается к заголовку и выполняет инструкции из третьей части заголовка. Изменяется значение переменной-счетчика (выражение 3).
Возвращаемся к пункту три.
А теперь то же самое для нашей программы. Встречаем цикл for.

Инициализируем переменную счётчик i = 0;
Проверяем условие i < 100. Т.к. i = 0, то условие ИСТИНА;
Выполняем тело цикла. Генерируем число от 0 до 2. В операторе switch определяем, какое число было сгенерировано, и увеличиваем соответствующий счётчик;
Т.к. тело цикла закончено, то выполняем Выражение 3. Теперь i = 1.
Возвращаемся к условию;
Проверяем условие i < 100. Т.к. i = 1, то условие ИСТИНА
Выполняем тело цикла. Генерируем число от 0 до 2. В операторе switch определяем, какое число было сгенерировано, и увеличиваем соответствующий счётчик;
Изменяем счётчик. Теперь i = 2. Возвращаемся к условию.
И так далее, пока i не станет равным 100. В этом случае при проверке условия получим ЛОЖЬ. Выполнение цикла прекратится. Программа продолжит выполнять инструкции, расположенные за циклом.

Давайте посмотрим ещё на один пример.*/