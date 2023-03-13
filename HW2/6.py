
N = int(input())

summa = 1
factorial = 1

for number in range(1, N + 1):
    factorial = factorial / number
    summa += factorial
print(summa)
