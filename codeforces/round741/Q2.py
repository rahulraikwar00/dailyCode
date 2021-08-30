import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
    # n, k = map(int, input().split())
    n = int(input())
    pls = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
           43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, ]
    flg = False
    while(n > 0):
        if n % 10 in [1, 2, 4, 6, 8, 9]:
            print(1)
            flg = False
            break
        n = n // 10
        flg = True
    if flg:
        prime = []


