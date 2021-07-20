n = int(input())
# read n numbers seperated by spaces:
a = [int(x) for x in input().split()]

# sort the array in descending order:
a.sort(reverse=True)

# compute sum of all the numbers:
sum = 0
for i in range(n):
    sum += a[i]

count = 0
sum2 = 0
for i in a:
    sum2 += i
    count += 1
    sum -= i
    if sum2 > sum:
        break

print(count)
