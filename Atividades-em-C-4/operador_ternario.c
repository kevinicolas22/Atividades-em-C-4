#include <stdio.h>

int main() {

  char resposta;

  printf("Em que período do dia estamos?\n ");
  printf("Digite m-matutino ou v-Vespertino ou n-Noturno:\n");
  scanf("%s", &resposta);

    resposta == 'm' ? printf("Bom dia!") : resposta == 'v' ? printf("Boa tarde!") : printf("Boa noite!");
}