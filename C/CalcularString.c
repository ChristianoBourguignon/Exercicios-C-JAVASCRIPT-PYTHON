#include <stdio.h>

// Questão 01:
// Suponha que não existissem as funções strlen,
// strcpy, strcat e strcmp. Pede-se, então, a
// implementação de funções que tenham o
// mesmo objetivo daquelas.

int funcaoStrlen(char c[]){
  int count=0;
  while (c[count] != '\0'){
    count++;
  }
  return count;
};

int funcaoStrcpy(char c[]){
  char copy[61];
  int i;
  for (i=0;copy[i];i++){
    copy[i] = c[i];
  }
  return printf("String Copy: %s \n", copy);
};

int funcaoStrcat(char c[], char cat[]){
  int i, tam;
  tam = funcaoStrlen(cat);
  for (i=0;cat[i];i++){
    cat[tam+i] += c[i];
  }
  return printf("String Cat: %s \n", cat);
};

// int funcaoStrcmp(char c[], char cat[]){
//   int i, tam;
//   tam = funcaoStrlen(cat);
//   for (i=0;cat[i];i++){
//     cat[tam+i] += c[i];
//   }
//   return printf("String Cat: %s \n", cat);
// };

int main(void) {
  char nome[61];
  char cat[61];
  int tam;
  char copy[61];
  printf("Qual é o nome a ser medido? \n");
  gets(nome);
  printf("Qual é o nome a ser concatenado? \n");
  gets(cat);
  tam = funcaoStrlen(nome);
  printf("String Len: %d \n", tam);
  funcaoStrcpy(nome);
  funcaoStrcat(nome,cat);
  
  
  return 0;
}