#include <stdio.h>
#include <cs50.h>


int main(void){

  int altura;
  int linha;
  int coluna;
  //Pede a altura ao usuário(valores entre 1 e 8)
  printf("===BEM VINDO AO JOGO DO MARIO!===\n");

  do {
    altura = get_int("Altura: ");
  } while (altura > 8 || altura < 1);

  //Loop da linhas
  for (linha = altura; linha > 0; linha--) {
    //Loop das colunas
    for (coluna = 0; coluna <= altura; coluna++) {
      if (coluna >= linha) {
        printf("#");
      } else if (coluna > 0) {
        printf(" ");
      }
    }
    printf("  ");
    for (coluna = altura; coluna >= 0; coluna--) {
      if (coluna >= linha) {
        printf("#");
      }
    }
    printf("\n");
  }
}
