#include <stdio.h>

int main() {

  int turno = 0;
  printf(" Digite 1 para consultar saldo\n Digite 2 para fazer empréstimo\n Digite 3 para consultar fatura do cartão de crédito\n Digite 4 para pedir novo cartão\n Digite 5 para falar diretamente com atendente\n ");
  scanf("%d", &turno);

  switch (turno) {
    case 1:
      printf("Consultar saldo");
      break;
    case 2:
      printf("Fazer empréstimo");
      break;
    case 3:
      printf("Consultar fatura do cartão de crédito");
      break;
    case 4:
      printf("Pedir novo cartão");
      break;
    default:
      printf("Falar diretamente com atendente");
      break;
  }