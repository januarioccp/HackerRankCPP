n = int(input())
a = [int(x) for x in input().split(' ')]

for i in range(len(a)):
	for j in range(len(a)):
		if i!=j:
			x = a[i]
			y = a[j]
			ai = x&y
			aj = x|y
			if (ai*ai + aj*aj)-(a[i]*a[i] + a[j]*a[j]) > 0 :
					a[i] = ai
					a[j] = aj
res = 0
for i in a:
	res = res + i*i

print (res)