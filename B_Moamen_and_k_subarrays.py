from typing import Counter


for i in range(int(input())):
    n, k = map(int, input().split())
    ls = list(map(int, input().split()))
    cout = 1
    d = Counter(ls)
    # print(d)
    for i in range(n-1):
        if ls[i]+1 != ls[i+1] or ls[i]>ls[i+1]:
            cout += 1
            # print("splilt:  ", ls[i])
        elif ls[i+1]-1!=ls[i] and d[ls[i]+1]>=1:
            cout+=1
            # print("splilt:  ", ls[i])
        
    # print("couut:: ",cout)
    if cout == k:
        print("Yes")
    else:
        print("No")
