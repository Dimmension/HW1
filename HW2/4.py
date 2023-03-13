# ВНИМАНИЕ! ШУТКА
# Армянин-программист назвал сына Трафик...


n = int(input())
max_length = 0
# Две переменных на убывание и возрастание последовательности
maxIncrease = 0
maxDecrease = 0
# Кэш предыдущего числа
cache = n

if n != 0:
    maxIncrease = 1
    maxDecrease = 1

while n != 0:
    n = int(input())
    if n != 0:
        # если элемент больше предыдущего, возрастание +1, убывание = 1
        if n > cache:
            maxIncrease += 1
            if maxIncrease > max_length:
                max_length = maxIncrease
            maxDecrease = 1
            # Перезапись кэша
            cache = n
        # Аналогично
        elif n < cache:
            maxDecrease += 1
            if maxDecrease > max_length:
                max_length = maxDecrease
            maxIncrease = 1
            cache = n
        elif n == cache:
            maxDecrease = 1
            maxIncrease = 1

if maxIncrease > max_length:
    max_length = maxIncrease
print(max_length)
