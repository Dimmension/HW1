
def addToSeq(s):
    new = ''
    for i in range(len(s)):
        if s[i] == '0':
            new += '1'
        else:
            new += '0'
    return new


def morisTueSeq(n):
    s = "0"
    for i in range(1, n):
        s += addToSeq(s)
    return s


n = int(input())

print(morisTueSeq(n)[0:n])
