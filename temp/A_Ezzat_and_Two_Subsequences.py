for i in range(int(input())):
    a = int(input())
    ls = list(map(int, input().split()))
    print(max(ls) + (sum(ls)-max(ls))/(len(ls)-1))

