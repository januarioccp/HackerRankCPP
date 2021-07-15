import sys

watermelon = str(input())

if len(watermelon) < 7:
    print('NO')
else:
    one = watermelon.split('0')
    zero = watermelon.split('1')
    if len([x for x in ' '.join(one).split() if len(x)>=7]) >= 1 or len([x for x in ' '.join(zero).split() if len(x)>=7]) >= 1:
        print('YES')
    else:
        print('NO')
