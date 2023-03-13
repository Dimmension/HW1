summa = 0

count = 0

# ввод до нуля
while (n := int(input())) != 0:
    summa += n
    count += 1
print(summa / count)
