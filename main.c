/******************************************************************************

Crie um programa imprime na tela os valores de 1 a 100 (incluindo o 1 e o 100).

*******************************************************************************/
#include <stdio.h>


int main() {
    int i = 1; 
    
    while (i <= 100) {
        printf("%d ", i);
        i++; 
    }
    printf("\n");

    return 0; 
}
