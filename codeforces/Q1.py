for _ in range(int(input())):
    n =int(input())
    ls = list(map(int, input().split()))
    ans=ls[0]
    for j in range(1,len(ls)):
        ans=ans&ls[j]
    print(ans)

