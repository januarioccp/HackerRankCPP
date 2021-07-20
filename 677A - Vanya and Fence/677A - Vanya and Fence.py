n = [int(x) for x in input().split()]
f = [int(x) for x in input().split()]

count = len(f)
for h in f:
    if h > n[1]:
        count += 1
print(count)
