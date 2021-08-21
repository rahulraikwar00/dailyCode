# 3
# 3
# 1 2 3
# 4
# 0 1 1 0
# 10
# 8 3 6 11 5 2 1 7 10 4


for i in range(int(input())):
    n = int(input())
    ls = list(map(int, input().split()))
    summ = sum(ls)
    ex = summ % n
    print((n-ex)*ex)
