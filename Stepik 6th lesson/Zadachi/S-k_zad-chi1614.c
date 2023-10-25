#include <stdio.h>
#include <locale.h>

int main(void) {
    
    setlocale(LC_ALL,"");
    
    int k;
  
    scanf("%d", &k);
         
    switch(k % 2) 
        
   {
        case 1 : printf("Любит");break;
        case 0 : printf("Не любит");break; 
        default : break;
   }
    
        return 0;
}