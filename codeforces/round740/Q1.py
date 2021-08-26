# 3
# 3
# 3 2 1
# 7
# 4 5 7 1 3 2 6
# 5
# 1 2 3 4 5


for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    itr = 0
    b = sorted(a)
    f = 0
    for i in range(n):
        ch = 0
        if(b == a):
            print(itr)
            f = 1
            break
        itr = itr+1
        if itr % 2 == 0:
            for j in range(1, n-1, 2):
                if a[j] > a[j+1]:
                    k = a[j]
                    a[j] = a[j+1]
                    a[j+1] = k
                    ch += 1
        else:
            for j in range(0, n-2, 2):
                if(a[j] > a[j+1]):
                    k = a[j]
                    a[j] = a[j+1]
                    a[j+1] = k
                    ch += 1
    if(f == 0):
        print(itr)
