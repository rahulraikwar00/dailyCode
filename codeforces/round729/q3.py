from abc import ABCMeta
import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
    #   n, k = map(int, input().split())
    #   a = list(map(int, input().split()))
    n = int(input())
    ans = 0
    for i in range(n):
        if(i % 2 == 0 and i % 3 == 0):
            ans += 4
        elif i % 3 == 0:
            ans += 2
        elif i % 2 == 0:
            ans += 3
    print(ans)