n = int(input())

sotni = 0
desyatki = 0
edinici = 0

sotni = n // 60
n = n % 60
# выгоднее покупать 60 поездок, если нужно совершить больше 34 поездок
if n > 34:
    sotni += 1
else:
    desyatki += n // 10
    n = n % 10
    # выгоднее покупать 10 поездок, если нужно совершить больше 8 поездок
    if n > 8:
        desyatki += 1
    else:
        edinici = n
print(edinici, desyatki, sotni)
