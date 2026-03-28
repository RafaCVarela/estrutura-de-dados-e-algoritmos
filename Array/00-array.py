meu_array = [50, 17, 2, 38, 4, 57]

menorValor = meu_array[0]

for i in meu_array:
    if menorValor > i:
        menorValor = i

print(f"O menor valor do array é {menorValor}.")
