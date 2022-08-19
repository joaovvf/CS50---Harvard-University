#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void){

  //Declaração das variáveis utilizadas
  string texto;
  int i;
  int letras = 0;
  int frases = 0;
  int palavras = 1; //Palavras começam em 1 pois o laço for não contabiliza a última palavra
  float L, S;

  texto = get_string("Insira o texto: "); //Recebe o texto do usuário

  //Verificação da quantidade de letras, espaços e frases
  for(i = 0; i < strlen(texto); i++) {
    if (isalpha(texto[i])){
      letras++;
    }
    else if (isspace(texto[i])){
      palavras++;
    }

    else if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?') {
      frases++;
    }
  }

  L = (float) letras * 100 / ((float) palavras); // L = Número médio de letras por 100 palavras
  S = (float) frases * 100/ ((float) palavras); // S = Número médio de frases por 100 palavras
  int index = round(0.0588 * L - 0.296 * S - 15.8); // Fórmula de cálculo da legibilidade do texto(índice Coleman-Liau)

  //Output e suas condições de exibição
  if (index <= 1) {
    printf("Before Grade 1\n");
  } else if (index >= 16) {
    printf("Grade 16+\n");
  } else {
    printf("Grade %i\n", index);
  }
}