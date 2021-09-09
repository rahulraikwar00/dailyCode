# def diagonalDifference(arr, n):
#     fs = 0
#     sec = 0
#     for i in range(n):
#         fs += arr[i][i]
#         sec += arr[i][n-i-1]
#     print(fs, " ", sec)
#     # Write your code here


# if __name__ == '__main__':
#     # fptr = open(os.environ['OUTPUT_PATH'], 'w')

#     n = int(input().strip())

#     arr = []

#     for _ in range(n):
#         arr.append(list(map(int, input().rstrip().split())))
#     diagonalDifference(arr, n)
# def stair
# case(n):
# print("ads")
# def staircase():
#     n = input()
#     print(n[-2::], "00"+n[2:len(n)-2:])
#     if n[-2::] == "pm":
#         if int(n[:2:])+12 >= 24:
#             print("00"+n[2:len(n)-2:])


# staircase()

# # 12:05:45PM


import re
time = input()
times = re.search(r"(?P<hh>..):(?P<mm>..):(?P<ss>..)(?P<ampm>..)", time)
hour = times.group('hh')
if times.group('ampm') == 'PM':
    if hour == '12':
        hr = '12'
    else:
        hr = str(int(hour) + 12)
else:
    if hour == '12':
        hr = '00'
    else:
        hr = hour
print(hr + ':' + times.group('mm') + ':' + times.group('ss'))
