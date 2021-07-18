s = input().split()
k = int(s[0])
n = int(s[1])
w = int(s[2])

borrow = ((w*(w+1)//2)*k-n)

print(borrow if borrow > 0 else 0)
