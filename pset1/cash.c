#include <stdio.h>
#include <cs50.h>
#include <math.h>

int qtMoedas(int valor, int moeda) {
    int moedas = 0;
    for(int valor_restante = valor; valor_restante >= moeda; valor_restante -= moeda) moedas++;
    return moedas;
}

int main(void){

  float troco;

  //Input positivo do usuário
  do {
    troco = get_float("Digite seu troco: ");
  } while (troco < 0);

  //Transformar o valor em reais para centavos
  int centavos = round((troco * 100));

  int moeda25 = qtMoedas(centavos, 25);
  centavos -= (moeda25 * 25);
  int moeda10 = qtMoedas(centavos, 10);
  centavos -= (moeda10 * 10);
  int moeda5 = qtMoedas(centavos, 5);
  centavos -= (moeda5 * 5);
  int moeda1 = qtMoedas(centavos, 1);
  centavos -= (moeda1 * 1);

  int qt_moedas = moeda25 + moeda10 + moeda5 + moeda1;

  printf("%i\n", qt_moedas);
}

