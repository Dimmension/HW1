n = int(input())
# проход по всем числам от 2 до n + 1
for i in range(2, n + 1):
    if n % i == 0:
        print(i)
        break
