
def walk(n):
    if n == 0:
        return 0
    if n <= 5:
        return 1
    else:
        return int(n/5) + walk(n - int(n/5)*5)

n = int(input())
print(walk(n))