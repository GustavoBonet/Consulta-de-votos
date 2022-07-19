#include <stdio.h>

int main(void) {
  printf("\n-----PESQUISA-----\n\n");
  char sexo = 'm';
  char entrada = 's';
  

    printf("Digite o sexo [M/F]");
    scanf("%c",&sexo);

    printf("sair da consulta:[S/N]");
    scanf("%c",&entrada);
    
    printf("%c",entrada);


  
  return 0;
}