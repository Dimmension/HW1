a = int(input())
b = int(input())
# x = -b //a
# бескоечное число решений если делим 0
if (b == 0 and a == 0):
    print("INF")
elif (a == 0 or (b % a) != 0):
    print("NO")
else:
    print(-b // a)
