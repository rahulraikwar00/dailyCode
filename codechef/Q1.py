# 1
# 5 3
# 1 2 3 4 5

import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    ls = list(map(int, input().split()))
    cnt = 0
    for i in range(0, n-k+1):
        if max(ls[i:i+k+1:]) == ls[i+k-1]:
            cnt += 1
    print(cnt)
