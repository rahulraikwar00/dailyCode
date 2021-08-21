# 10
# 1kt
# 2
# 3
# 4
# 5
# 6
# 7
# 8
# 9
# 1000

for _ in range(int(input())):
    n = int(input())
    kth = 0
    i = 1
    while(n != 0):
        if i % 3 == 0 or i % 10 == 3:
            i+=1
            continue
        else:
            i+=1
            kth = i
            n-= 1
    print(kth-1)
