s = input()
t = 0
cnt = 0
j = 0
while(j <=(len(s)-1)):
    if(s[j]) == (s[j+1]):
        t += 1
        j+=2
    if t % 2 == 0:
        cnt += 2
        t = 0
    j+=1
print(cnt*2)
