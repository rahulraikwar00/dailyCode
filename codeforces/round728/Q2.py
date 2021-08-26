
# 3
# 2
# 3 1
# 3
# 6 1 5
# 5
# 3 1 5 9 2


import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
    n = int(input())
#   n, k = map(int, input().split())
    ls = list(map(int, input().split()))
    ls.insert(0, 0)
    cnt = 0
    for i in range(1, n+1):
        for j in range(ls[i]-i, n+1, ls[i]):
            if (i+j) == (ls[i]*ls[j]) and j >= 0 and i < j:
                cnt += 1
    print(cnt)
