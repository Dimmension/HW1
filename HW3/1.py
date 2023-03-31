x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())


def can_eat(a, b):
    result = abs(a[0] - b[0]) + abs(a[1] - b[1])
    if result == 3:
        return True
    return False


a = (x1, y1)
b = (x2, y2)

print(can_eat(a, b))
