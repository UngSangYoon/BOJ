# N이 크지 않으므로(1000이하) bubble정렬로도 해결 가능
N = int(input())
A = [0] * N

for i in range(N):
    A[i] = int(input())

for i in range(N - 1, 0, -1):
    for j in range(i):
        if A[j] > A[j + 1]:
            temp = A[j]
            A[j] = A[j + 1]
            A[j + 1] = temp

for i in range(N):
    print(A[i])
