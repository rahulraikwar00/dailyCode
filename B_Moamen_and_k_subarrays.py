from typing import Counter


for i in range(int(input())):
    n, k = map(int, input().split())
    ls = list(map(int, input().split()))
    cout = 1
    d = Counter(ls)
    # print(d)
    for i in range(n-1):
        if ls[i]+1 != ls[i+1] or ls[i] > ls[i+1]:
            cout += 1
            # print("splilt:  ", ls[i])
        elif ls[i+1]-1 != ls[i] and d[ls[i]+1] >= 1:
            cout += 1
            # print("splilt:  ", ls[i])

    # print("couut:: ",cout)
    if cout <= k:
        print("Yes")
    else:
        print("No")


for _ in range(int(input())):
    n, k = map(int, input().split())
    l = list(map(int, input().split()))
    t = sorted((x, i) for i, x in enumerate(l))
    # print(t)
    p = 1
    for i in range(1, n):
        if t[i][1] != t[i-1][1]+1:
            p += 1
    # print(p)
    print("Yes" if p <= k else "No")
