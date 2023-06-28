# 나머지 합 구하기
# 구간합 이용
import sys

input = sys.stdin.readline

N, M = map(int, input().split())
A = list(map(int, input().split()))

prefix_sum = []
remainder = [0] * N
C = [0] * M  # M으로 나누었을 때 나머지가 index , 값은 개수
temp = 0
answer = 0

# 합 배열 생성
for i in A:
    temp = temp + i
    prefix_sum.append(temp)

for i in range(N):
    remainder[i] = prefix_sum[i] % M
    C[remainder[i]] += 1

for i in range(M):
    if C[i] > 1:
        answer += (C[i] * (C[i] - 1)) // 2

answer += C[0]

print(answer)
