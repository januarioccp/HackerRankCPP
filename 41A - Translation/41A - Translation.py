# read a string from input:
s = input()
t = input()

# check if the string is a palindrome:
if s[::-1] ==  t:
    print('YES')
else:
    print('NO')

