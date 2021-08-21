
for _ in range(int(input())):
    a, b = map(int, input().split())
    # ls=list(map(int, input().split()))
    ans = abs(a-b)
    if ans == 0:
        print(0, 0)
    else:
        a = ans-(a % ans)
        b = a % ans
        print(ans, min(a, b))
for _ in range(int(input())):
    a, b = map(int, input().split())
    c = abs(a-b)
    m = 0
    if c != 0:
        m = a % c
    print(c, min(m, c-m))

# 4
# 8 5
# 1 2
# 4 4
# 3 9
