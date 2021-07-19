s = input()

# initialize a vector or lucky numbers:
lucky_numbers = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]

# count characters in s that are equal to '4' or '7':
count_4_7 = 0
for c in s:
    if c == '4' or c == '7':
        count_4_7 += 1

# check if count_4_7 is in lucky_numbers:
if count_4_7 in lucky_numbers:
    print('YES')
else:
    print('NO')
    
