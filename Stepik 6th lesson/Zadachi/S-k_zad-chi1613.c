#include <stdio.h>
#include <locale.h>

int main(void)
{
 setlocale(LC_ALL,"");
    char k;
    printf("Введите вашу оценку, от 1 до 5: ");
    scanf("%c", &k);
    
switch (k)
    
{
    case '1' : printf("плохо");break;
    case '2' : printf("неудовлетворительно");break;
    case '3' : printf("удовлетворительно");break;
    case '4' : printf("хорошо");break;
    case '5' : printf("отлично");break;
    default : printf("некорректные данные");break;
}
return 0;

}