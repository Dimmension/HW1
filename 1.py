k = int(input())
m = int(input())
n = int(input())
res = 0
# все котлеты лезут в сковороду
if k >= n:
    res = 2*m
else:
    # жарим то кол-во партий котлет которые у нас есть
    res = n//k * m*2
    if n % k != 0:
        res += m * 2
print(res)
