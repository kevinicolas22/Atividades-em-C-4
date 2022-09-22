#include <stdio.h>

int main() {
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);
  
  if (num % 3 == 0) 
  {
    printf("O número é multiplo de 3\n");
  } 
  if (num % 4 == 0) 
  {
    printf("O número é multiplo de 4\n");
  } 
  if (num % 5 == 0) 
  {
    printf("O número é multiplo de 5\n");
  }
}