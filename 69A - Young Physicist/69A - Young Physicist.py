x = []
y = []
z = []

n = int(input())

for i in range(n):
    entrada = input().split()
    x.append(int(entrada[0]))
    y.append(int(entrada[1]))
    z.append(int(entrada[2]))

if sum(x) == 0 and sum(y)==0 and sum(z)==0:
    print('YES')
else:
    print('NO')