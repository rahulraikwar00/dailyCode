# 5
# 2
# 2 3 4 5
# 3
# 2 3 4 5 5 5
# 1
# 2 4
# 1
# 2 3
# 4
# 1 5 3 2 6 7 3 4

import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
    #   n, k = map(int, input().split())
    n = int(input())
    ls = list(map(int, input().split()))
    a, b = 0, 0
    for i in ls:
        if(i % 2 == 0):
            a += 1
        else:
            b += 1
    if a == b:
        print("Yes")
    else:
        print("No")
