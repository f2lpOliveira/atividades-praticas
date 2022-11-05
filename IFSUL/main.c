#include <stdio.h>

main() {

  int multiplo;
  printf("Digite um número: ");
  scanf("%d", &multiplo);

  if (multiplo % 2 == 0) {
    printf("%d é múltiplo de 2!", multiplo);
  } else {
    printf("%d não é múltiplo de 2!", multiplo);
  }
}