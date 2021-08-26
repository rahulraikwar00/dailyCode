t = int(input())
for _ in range(t):
    n, a, b = map(int, input().split())
    x = 1
    while True:
        if n < x:
            print('No')
            break
        elif (n-x) % b == 0:
            print('Yes')
            break
        elif a == 1:
            print('No')
            break
        else:
            x *= a
