num = int(input())
edinici = ["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"]
desyatki = ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"]
a = desyatki[num // 10 % 10]
b = edinici[num % 10]
if (num == 100):
    print("C")
else:
    print(a + b)
