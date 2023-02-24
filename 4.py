num = int(input())
# массив десятков и единиц, по индексам потом получаем нужное
edinici = ["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"]
desyatki = ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"]
a = desyatki[num // 10 % 10]
b = edinici[num % 10]
# 100 лучше вынести, чтобы не создавать доп массив под сотни
# (можно и по другому, но я захотел так)
if (num == 100):
    print("C")
else:
    print(a + b)
