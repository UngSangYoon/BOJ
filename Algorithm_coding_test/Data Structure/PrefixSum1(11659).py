# 수 N개가 주어졌을 때 s번째 수에서 e번쨰 수까지의 합을 구하는 프로그램(M번 물어봄)
# 구간합 이용
import sys

input = sys.stdin.readline
N, M = map(int, input().split())
numbers = list(map(int, input().split()))
prefix_sum = [0]
temp = 0

# 합 배열 만들기
for i in numbers:
    temp = temp + i
    prefix_sum.append(temp)

# 합 배열에서 구간 합 구하기
for i in range(M):
    s, e = map(int, input().split())
    print(prefix_sum[e] - prefix_sum[s - 1])
