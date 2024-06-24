#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#pragma GCC diagnostic ignored "-Wunused-result"

int main() {
  int v_numero;
  char v_letra;
  // printf ("Digite um número: ");
  scanf("%d", &v_numero);
  // printf ("Digite uma letra: ");
  scanf(" %c", &v_letra);

  if (v_letra != 'c' && v_letra != 'b' && v_letra != 'p' && v_letra != 's' &&
      v_letra != 'h' && v_letra != 'v') {
    printf("Não existe essa opção");
    return 0;
  }

  // imprime parte de cima
  for (int col = 1; col <= v_numero; col++) {
    printf("*");
  }
  printf("\n");

  // imprime bordas
  for (int lin = 2; lin < v_numero; lin++) {
    printf("*");
    for (int col = 2; col < v_numero; col++) {
      // imprime diagonal quando a linha for igual a coluna
      if (v_letra == 'p' && lin == col) {
        printf("*");
      } else {
        // imprime diagonal secundaria quando a linha for igual ao final da
        // coluna
        if (v_letra == 's' && lin == (v_numero - col) + 1) {
          printf("*");
        } else {
          // imprime diagonal no meio do quadrado
          if (v_letra == 'h' && lin == (v_numero / 2) + 1) {
            printf("*");
          } else {
            // imprime divisão no meio do quadrado
            if (v_letra == 'v' && col == round(v_numero / 2)) {
              printf("*");
            } else {
              if (v_letra == 'c') {
                printf("*");
              } else {
                printf(" ");
              }
            }
          }
        }
      }
    }
    printf("*\n");
  }

  // imprime rodapé
  for (int col = 1; col <= v_numero; col++) {
    printf("*");
  }
  printf("\n");
  return 0;
}