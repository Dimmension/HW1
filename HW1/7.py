a = int(input())
# перебрав все варинты можно понять,
# что окончание зависит только от последней цифры
res = a % 10
if (res == 1):
    print(a, "korova")

elif (res == 2 or res == 3 or res == 4):
    print(a, "korovy")

else:
    print(a, "korov")
