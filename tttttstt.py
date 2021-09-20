c = int(input())
ls = list(map(int, input().split()))

# res = ls[0]
# flf = False
# if ls[0] > 30:
#     print("not s")
# elif ls[0]<=30 and len(ls)==2:
# else:
#     for i in range(c-1):
#         if (ls[i+1]-30) > res:
#             flf = True
#             break
#         else:
#             res += 30
#     # print(res,"bere")
# if flf:
#     print("f")
# else:
#     print("t")

res = 0
flg=True
for i in ls :
    print(res)
    if i>30 and res<(i-30):
        print(res)
        flg = False
        break
    else:
        res+=30
print(res)
if flg:
    print("t")
else:
    print("f")



