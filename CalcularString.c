#include <stdio.h>

// Questão 01:
// Suponha que não existissem as funções strlen,
// strcpy, strcat e strcmp. Pede-se, então, a
// implementação de funções que tenham o
// mesmo objetivo daquelas.

int contadorCaracter(char c[]){
  int count=0;
  while (c[count] != '\0'){
    count++;
  }
  return count;
};

int main(void) {
  char nome[61];
  int count=0;
  printf("Qual é o seu nome?");
  scanf("%s",nome);
  count = contadorCaracter(nome);
  printf("Tamanho da String é de: %d", count);
  return 0;
}
