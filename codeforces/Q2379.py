
# 7
# 6 2 4
# 2 3 1
# 2 4 10
# 5 3 4
# 1 3 2

# 2 5 4
# 4 3 2


for _ in range(int(input())):
    a, b, c = map(int, input().split())
    n = abs(a-b)*2
    if (a <= n//2) == (b <= n//2):
        print(-1)
        continue
    if (c > n):
        print(-1)
        continue
    print(c+n//2 if c <= n//2 else c-n//2)
