txt = input()
last = txt.rfind('f')
first = txt.find('f')
if first == last:
    if first == -1:
        first = ''
    print(first)
else:
    print(first, last)
