import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
    s = ""
    for i in range(int(input())):
        n = input()
        print(n)
        s += "0" if n[i] == "1" else "1"
    print(s)
