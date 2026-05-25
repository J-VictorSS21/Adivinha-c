#include <stdio.h>

int main() {
    
    int i;

    printf("Numeros pares entre 2 e 50 (Abordagem por Condicional):\n");

    
    for (i = 2; i <= 50; i++) {
        
        
        if (i % 2 == 0) {
            printf("%d ", i); 
        }
    }

    printf("\n"); 
    return 0;
}