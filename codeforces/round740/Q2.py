import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
    sttr = []
    won = []
    for i in range(int(input())):
        st = 0
        ls = list(map(int, input().split()))
        won.append(ls[0])
        for j in range(1, len(ls)-1):
            print(j, "j")
            st = max(st, ls[j]-ls[j+1])
        sttr.append(ls[0]+1+st)
    print(sttr, won)
    for q in range(len(sttr)-1):
        if sttr[q]+won[q] > sttr[q+1]: