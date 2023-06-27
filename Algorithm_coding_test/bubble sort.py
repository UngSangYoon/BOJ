import sys

input = sys.stdin.readline

N = int(input())
A = []

for i in range(N):
    A.append((int(input()), i))

Max = 0
Sorted_A = sorted(A)

for i in range(N):
    if Max < Sorted_A[i][1] - i:
        Max = Sorted_A[i][1] - i

print(Max + 1)
