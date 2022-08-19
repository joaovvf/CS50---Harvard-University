from cs50 import get_string
import math

texto = get_string("Digite seu texto: ")

palavras = texto.count(" ") + 1
frases = texto.count("?") + texto.count("!") + texto.count(".")
letras = len(texto.replace(" ", "").replace("?", "").replace("!", "").replace(".", "").replace(",", "").replace("'", "").replace('"', "").replace(":", ""))

L = float(letras * 100) / float(palavras)
S = float(frases * 100) / float(palavras)
readability = math.ceil((int(0.0588 * L - 0.296 * S - 15.8)))

if readability < 1:
    print(f'Before grade 1')
elif readability >= 16:
    print(f'Grade 16+')
else:
    print(f'Grade {readability}')
