array = list(map(int, input().split()))
count = 0
#решение за квадрат(можно и за линию)
#запускаем от каждого числа проверку
for i in range(len(array)):
    for j in range(i+1, len(array)):
        if array[i] == array[j]:
            count += 1
print(count)
