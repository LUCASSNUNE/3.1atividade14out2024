#include <stdio.h>
#include <math.h>

int main() {
  
        int folhas ; 
        float soma ;
        
        printf("Informe quantas folhas sao: ");
        scanf("%d", &folhas);

         if (folhas>100)  {
        soma = folhas*0.20 ;
        }

        else {
        soma = folhas*0.25 ;
        }

        printf("%.2f \n", soma);
 
}