# Algoritmo de Fibonacci

## O que é a sequência de Fibonacci

Definido pelo matemático medieval Leonardo de Pisa.
É uma sequência que 'n' é igual a soma de '(n-1)' e '(n-2)'.

## Algoritmo 01 - Usando looping

1. Definir o primeiro e segundo termo, respectivamente,
iguais a 0 e 1;
2. Termo seguinte é a soma dos dois termos anteriores a ele;
3. Os dois termos anteriores são atualizados;
4. Repita (2.) e (3.) a quantidade de vezes desejadas.


## Algoritmo 02 - Usando recursão

1. Definir o primeiro e segundo termo, respectivamente,
iguais a 0 e 1;
2. Termo seguinte é a soma dos dois termos anteriores a ele;
3. Os dois termos anteriores são atualizados;
4. Pare se o termo da sequência desejado foi atigindo;
5. Senão retorne a função com os dois termos atualizados.

## Algoritmo 03 - Usando a função Fibonacci

1. Escreva(n-termo);
2. Se `n <= 1`, retorne n
3. Senão retorne a função f(n-1) + f(n-2)