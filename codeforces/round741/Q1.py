import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
    l, r = map(int, input().split())
    # if r % l == 0:
    #     print(0)
    #     continue
    if l == r:
        print(0)
    else:
        if (r//2)+1 > l:
            print(r % ((r//2)+1))
        else:
            print(r % l)
#   a = list(map(int, input().split()))
