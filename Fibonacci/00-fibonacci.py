n1 = 0
n2 = 1
sequencia_fibonacci = []

sequencia_fibonacci.append(n1)
sequencia_fibonacci.append(n2)

for _ in range(18):
    n1, n2 = n2, n1+n2
    sequencia_fibonacci.append(n2)

print(sequencia_fibonacci)
print("\n")
print(len(sequencia_fibonacci))
