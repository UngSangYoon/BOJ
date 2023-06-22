""" 시간 초과
# using sliding window
N , L= map(int,input().split())
A = list(map(int, input().split()))
D = [0]*N

# 처음 window에 원소는 유일하고 해당값이 최소임
minimum = A[0]
D[0] = minimum 

# 정해진 sliding window크기까지 증가
for i in range(1, L): 
    if  A[i] < minimum:
        minimum = A[i]
    D[i] = minimum

# window sliding하며 값 비교
for i in range(L, N): 
    j = i - L
    if A[i] < minimum:
        minimum = A[i]
        D[i] = minimum
    elif A[j] == minimum:
        minimum = A[j + 1]
        for k in range(j + 1, i + 1):
            if (A[k] < minimum):
                minimum = A[k]
    D[i] = minimum

print(*D)
"""
# using sliding window & deque
# deque[a][b] => a는 덱에서의 순서값 (0이면 가장 왼쪽, -1이면 가장 오른쪽)
# b = 0이면 값에 해당, b = 1 이면 원배열A에서의 인덱스
from collections import deque

N, L = map(int, input().split())
my_deque = deque()
A = list(map(int, input().split()))

for i in range(N):
    # 덱에서 가장 오르쪽 값이 삽입하려는 값보다 큰 경우 pop
    while my_deque and my_deque[-1][0] > A[i]:
        my_deque.pop()
    my_deque.append((A[i], i))  # 현재값 삽입

    if my_deque[0][1] <= i - L:
        my_deque.popleft()  # 가장 왼쪽값이 window의 범위를 벗어남
    print(my_deque[0][0], end=" ")  # 덱에서 왼쪽값 출력(최소값)
