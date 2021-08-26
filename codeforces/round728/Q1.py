import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
    cat = int(input())
    ls = [i for i in range(1, cat+1)]
    # print(ls)

    for i in range(0, len(ls)-1, 2):
        ls[i], ls[i+1] = ls[i+1], ls[i]

    if len(ls) % 2 != 0:
        ls[-1], ls[-2] = ls[-2], ls[-1]

    print(*ls)
