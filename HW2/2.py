N = int(input())

# вспомогательный буль(bool)
isZero = False
for i in range(N):
    n = int(input())
    if n == 0:
        isZero = True
if isZero:
    print("YES")
else:
    print("NO")
