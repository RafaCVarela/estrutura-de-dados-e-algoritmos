count = 2


def fibonacci(num1, num2, termo):
    global count
    if count <= termo:
        num3 = num1 + num2
        print(num3)

        num1, num2 = num2, num3

        count += 1

        return fibonacci(num1, num2, termo)
    else:
        return


termo = int(input("> Digite quantos termos da sequência de fibonacci: "))

print(0)
print(1)

fibonacci(0, 1, termo)
