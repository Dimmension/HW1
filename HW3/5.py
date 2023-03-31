array = list(map(int, input().split()))
count = 0
for i in range(len(array)):
    for j in range(i+1, len(array)):
        if array[i] == array[j]:
            count += 1
print(count)
