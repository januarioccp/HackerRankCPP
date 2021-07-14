import sys
import re
task = input()
pattern = r'[aeiouyAEIOUY]'
task = re.sub(pattern, '', task)
task2 = ''
for i in task:
    task2 = task2+'.'+i

print(task2.lower())

  