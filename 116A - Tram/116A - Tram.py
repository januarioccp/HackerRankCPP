# read a value from input and store in a variable called n:
n = int(input())

# read n pairs of values and store in two lists called a and b:
a = []
b = []
for i in range(n):
    x,y = map(int, input().split())
    a.append(x)
    b.append(y)
max_capacity = 0
current_capacity = 0
for i in range(n):
    current_capacity = current_capacity - a[i] + b[i]
    if current_capacity > max_capacity:
        max_capacity = current_capacity

print(max_capacity)