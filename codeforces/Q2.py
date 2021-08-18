# 5
# 7
# ?R???BR
# 7
# ???R???
# 1
# ?
# 1
# B
# 10
# ?R??RB??B?


def op(chr):
    if chr == "B":
        return "R"
    else:
        return "B"


for _ in range(int(input())):
    n = int(input())
    s = input()
    ans = ""
    # print(set(s))
    if len(set(s)) == 1:
        ch = "R"
        if s[0] == "?":
            for i in range(n):
                ans += ch
                ch = op(ch)
            print(ans)
            continue
        else:
            print(s)
            continue

    sts = s.lstrip("?")
    # print("sts: ", sts)
    cnt = len(s) - len(s.lstrip("?"))
    ch = ""
    if cnt % 2 == 0:
        ch = sts[0]
    else:
        ch = op(sts[0])
    anss = ""
    while(cnt != 0):
        anss += ch
        ch = op(ch)
        cnt -= 1
    ch = sts[0]
    # print("pre answer : ", anss)
    for i in range(len(sts)):
        # print("i : ", i)
        if sts[i] == "?":
            # print("anss += ch: ", ch)
            ch = op(ch)
            anss += ch
        else:
            ch = sts[i]
            anss += ch
    print(anss)


# BRRBRBR
# BRBRBRB
# B
# B
# BRRBRBBRBR

# BRRBRBR
# BRBRBRB
# B
# B
# BRRBRBBRBR
