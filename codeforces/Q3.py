# 2
# 3
# 0 1 0
# 3
# 1 1 0

for _ in range(int(input())):
    n = int(input())
    ls = list(map(int, input().split()))
    p = 0
    for i in range(n):
        if ls[i] == 0:
            p = i+1
    y = 1
    for i in range(n+1):
        if i == p:
            print(n+1, end=" ")
        else:
            print(y, end=" ")
            y += 1
