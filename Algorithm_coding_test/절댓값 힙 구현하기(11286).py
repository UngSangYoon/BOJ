from queue import PriorityQueue
import sys

print = sys.stdout.write
input = sys.stdin.readline
N = int(input())
my_Queue = PriorityQueue()

for i in range(N):
    request = int(input())
    if request == 0:
        if my_Queue.empty():
            print("0\n")
        else:
            temp = my_Queue.get()
            print(str((temp[1])) + "\n")
    else:
        my_Queue.put((abs(request), request))
