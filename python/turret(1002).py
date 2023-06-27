import math
import sys

input = sys.stdin.readline

T = int(input())
ans = ""

for i in range(T):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())

    distance = math.sqrt((abs(x1 - x2)) ** 2 + (abs(y1 - y2)) ** 2)

    if distance == 0:
        if r1 == r2:
            ans += "-1\n"
        else:
            ans += "0\n"

    elif distance == r1 + r2 or distance == abs(r1 - r2):
        ans += "1\n"

    elif distance < r1 + r2 and distance > abs(r1 - r2):
        ans += "2\n"

    else:
        ans += "0\n"

print(ans)
