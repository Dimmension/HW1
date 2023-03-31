def shiftToRight(array):
    first = array[len(array) - 1]
    for i in range(len(array) - 1, -1, -1):
        array[i] = array[i-1]
    array[0] = first
    return array


array = list(map(int, input().split()))

print(*shiftToRight(array))
