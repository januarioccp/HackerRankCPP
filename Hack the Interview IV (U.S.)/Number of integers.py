#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getNumberOfIntegers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. STRING L
#  2. STRING R
#  3. INTEGER K
#

def getNumberOfIntegers(L, R, K):
    # Write your code here
    resp = 0
    for number in range(int(L)+1,int(R)+1):
        if len(str(number)) - str(number).count('0') == K:
            resp = resp + 1 
    return resp

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    L = input()

    R = input()

    K = int(input().strip())

    ans = getNumberOfIntegers(L, R, K)

    fptr.write(str(ans) + '\n')

    fptr.close()

