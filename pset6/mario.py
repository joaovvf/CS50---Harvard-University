from cs50 import get_int

def receberAltura():
  while True:
      altura = get_int("Digite a altura: ")

      if 0 < altura < 9:
        return altura
      else:
        print(f"Apenas altura entre 1 e 8.")

altura = receberAltura()
linha = 0

for i in range(altura):
  linha += 1
  print("  " * (altura - linha), end="")
  print("# " * linha, end="")
  print("# " * (linha - altura), end="")
  print("# " * linha, end="")
  print()

 
