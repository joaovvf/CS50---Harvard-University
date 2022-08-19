from cs50 import get_float


def receberCentavos():
    while True:
        entrada = get_float('Digite seu troco: R$')

        if entrada > 0:
            entrada = entrada * 100
            return int(entrada)
        else:
            print(f'Somente números positivos.')

def contadorMoedas(valor, moeda):
    qtMoedas = 0
    while True:
        if valor >= moeda:
            valor = valor - moeda
            qtMoedas += 1
        else:
            return qtMoedas



entrada = receberCentavos()
print(f"Seus centavos: {entrada}")
moeda25 = contadorMoedas(entrada, 25)
entrada = entrada - (moeda25 * 25)
moeda10 = contadorMoedas(entrada, 10)
entrada = entrada - (moeda10 * 10)
moeda5 = contadorMoedas(entrada, 5)
entrada = entrada - (moeda5 * 5)
moeda1 = contadorMoedas(entrada, 1)
print(f"Quantidade de moedas recebidas: {moeda25+moeda10+moeda5+moeda1}.")
