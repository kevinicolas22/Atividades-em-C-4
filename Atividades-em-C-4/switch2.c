#include <stdio.h>

int main() {

  float nota1, nota2, media;
  char conceito;


  printf("Digite a 1° nota:\n ");
  scanf("%f", &nota1);
  printf("Digite a 2° nota:\n ");
  scanf("%f", &nota2);
  media = (nota1 + nota2) / 2;

  
  if (media >= 9.0 && media <= 10.0)
  {
  conceito = 'A';
  }
  else if (media >= 7.5 && media < 9.0)
  {
  conceito = 'B';  }
  else if (media >= 6.0 && media < 7.5)
  {
  conceito = 'C';  }
  else if (media >=  4.0 && media < 6.0)
  {
  conceito = 'D';  }
  else if (media < 4.0)
  {
  conceito = 'E';  }

  switch (conceito) {
    case 'A' : case 'B' : case 'C': printf("APROVADO");
      break;
    case 'D' : case 'E': printf("REPROVADO");
      break;
    default:
      printf("VOCÊ DIGITOU AS NOTAS DE FORMA ERRADA");
      break;
    }
}
