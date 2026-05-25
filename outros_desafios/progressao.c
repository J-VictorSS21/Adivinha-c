#include <stdio.h>

int main(){
  int soma = 0;
  int i;
  
  for (i=1; i<= 100; i++){
    soma += i;
  }

  printf("A soma de todos os numeros de 1 a 100 é = 
    %d\n", soma);
    return 0;
}