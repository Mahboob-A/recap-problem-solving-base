# https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
# 212024, Monday.

def main(): 
    c = input()
    if c == 'z' or c == 'Z':
        print('a')
    else:
        print(chr(ord(c) + 1))



if __name__ == '__main__':
    main()