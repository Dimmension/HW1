
def isSymmetric(a):
    for i in range(n):
        for j in range(n):
            if a[i][j] != a[j][i]:
                return "NO"
    return "YES"


n = int(input())
a = []
for i in range(n):
    row = input().split()
    for i in range(len(row)):
        #создаем массив и уже его добавляем в основной
        row[i] = int(row[i])
    a.append(row)

print(isSymmetric(a))
