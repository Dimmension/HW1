number = int(input())
maximum = number
max_equal = 1
# Код говорит за себя, коментарии излишни
while number != 0:
    number = int(input())
    if (number == maximum):
        max_equal += 1
    elif (maximum < number):
        maximum = number
        max_equal = 1
print(max_equal)
