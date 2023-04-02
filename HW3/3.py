def shiftToRight(array):
    first_element = array[len(array) - 1]
    #проход с конца
    for i in range(len(array) - 1, -1, -1):
        array[i] = array[i-1]
    array[0] = first_element
    return array


array = list(map(int, input().split()))

print(*shiftToRight(array))
