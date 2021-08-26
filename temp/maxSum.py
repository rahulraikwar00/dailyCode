# Write your code here
t = int(input())
while t > 0:
    t -= 1
    n, k = map(int, input().split())
    cnt = {}
    for x in map(int, input().split()):
        if x > 0:
            if x not in cnt:
                cnt[x] = x
            else:
                cnt[x] += x
    values = []
    for x in cnt.values():
        values += [x]
    values.sort()
    print(sum(values[-k:]))