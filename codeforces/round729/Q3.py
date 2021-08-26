# import sys
# import math
# input = sys.stdin.buffer.readline
# t = int(input())
# for _ in range(t):
#     k = int(input())
#     n = math.ceil(math.sqrt(k))
#     if k == 1:
#         print(1, 1)
#     else:
#         a = []
#         # print(n)
#         for j in range(((n-1)*(n-1))+1, (((n-1)*(n-1))+1 + 2*n)-1):
#             a.append(j)
#         # print(n,a,a[(len(a))//2], k)
#         if a[(len(a))//2] == k:
#             print(n, n)
#         else:
#             for i in range(n+n-1):
#                 if(a[i] == k):
#                     print(i, a[i])
#                     if i <= (len(a))//2:
#                         print("1st half : ", i+1, n)
#                         break
#                     else:
#                         print("2st half : ", n, (n+2-i))
#                         break
#         print()
# #  n=i-1
# # i-2 =


for i in range(int(input())):
    n = int(input())
    a = int((n - 1)**0.5)
    if n - a * a <= a + 1:
        print(n - a * a, a + 1)
    else:
        print(a + 1, (a + 1)**2 - n + 1)
