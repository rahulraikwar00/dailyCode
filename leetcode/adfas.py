def isValid(s):
    d = {}
    ans = ""
    for i in s:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    st = list(set([i for i in d.values()]))

    print(st, d)
    if len(st) == 1:
        ans = "YES1"
    elif len(st) >= 3:
        ans = "NO3"
    elif len(st) == 2:
        if abs(st[0]-st[1])==1 :
            ans = "yes"
        else:
            ans = "no"

    return ans


print(isValid("aabbcd"))
