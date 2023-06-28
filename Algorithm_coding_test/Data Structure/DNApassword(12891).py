import sys
input = sys.stdin.readline

checkList = [0] * 4
myList = [0] * 4
Result = 0

S, P = map(int, input().split())
totalList = list(input())
checkList = list(map(int, input().split()))


def add(c):
    global checkList, myList

    if c == 'A':
        myList[0] += 1

    elif c == 'C':
        myList[1] += 1

    elif c == 'G':
        myList[2] += 1

    elif c == 'T':
        myList[3] += 1


def delete(c):
    global checkList, myList

    if c == 'A':
        myList[0] -= 1

    elif c == 'C':
        myList[1] -= 1

    elif c == 'G':
        myList[2] -= 1

    elif c == 'T':
        myList[3] -= 1


def check():
    global checkList, myList, Result

    if myList[0] >= checkList[0] and myList[1] >= checkList[1] and myList[2] >= checkList[2] and myList[3] >= checkList[3]:
        Result += 1


# 첫 list 초기화
for i in range(P):
    add(totalList[i])

check()


for i in range(P, S):
    j = i - P
    add(totalList[i])
    delete(totalList[j])
    check()

print(Result)