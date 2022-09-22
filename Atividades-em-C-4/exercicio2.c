#include <stdio.h>

int main() {
 
  float nota1, nota2, media;

  printf("Digite a 1° nota:\n ");
  scanf("%f", &nota1);
  printf("Digite a 2° nota:\n ");
  scanf("%f", &nota2);
  media = (nota1 + nota2) / 2;
  printf("%.2f\n", media);
  media >= 10 ? printf("Aprovado com distinção!") : media < 10 && media > 7  ? printf("Aprovado!") : printf("Reprovado!");
}