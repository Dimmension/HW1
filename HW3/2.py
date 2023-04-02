
def addToSequence(s):
    #создаем новую строку на основе старой и возвращаем её
    new_segment = ''
    for i in range(len(s)):
        if s[i] == '0':
            new_segment += '1'
        else:
            new_segment += '0'
    return new_segment


def morisTueSequence(n):
    #всегда с 0
    s = "0"
    #n раз выполним итерацию добавления
    for i in range(1, n):
        s += addToSequence(s)
    return s


n = int(input())
#если послед. > n нужен срез
print(morisTueSequence(n)[0:n])
