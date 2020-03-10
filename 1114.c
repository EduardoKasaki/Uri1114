#include <stdio.h>

int main(void) {
  int senha, senha1;
 scanf("%d", &senha1);
  senha=2002;
  while (senha != senha1){printf("Senha Invalida\n");
  scanf("%d", &senha1);
  }
 printf("Acesso Permitido\n");

  return 0;
}
