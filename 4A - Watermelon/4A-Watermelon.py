    import sys
    input = sys.stdin.readline
     
    ############ ---- Input Functions ---- ############
    # For taking integer inputs.
    def inp():
        return(int(input()))
     
    # For taking List inputs.
    def inlt():
        return(list(map(int,input().split())))
     
    #For taking string inputs. Actually it returns a List of Characters, 
    # instead of a string, 
    # which is easier to use in Python, 
    # because in Python, Strings are Immutable.
    def insr():
        s = input()
        return(list(s[:len(s) - 1]))
     
    # For taking space seperated integer variable inputs.
    def invr():
        return(map(int,input().split()))
     
    watermelon = inp()
     
    if watermelon % 2 or watermelon==2:
        print('NO')
    else:
        print('YES')
