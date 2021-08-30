# 6
# 1 2
# 3 5
# 5 3
# 6 6
# 8 0
# 0 0

import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
    # n = int(input())
    a, b = map(int, input().split())
    if a == b and a == 0:
        print(0)
    elif a == b:
        print(1)
    elif abs(a-b) % 2 == 0:
        print(2)
    else:
        print(-1)
