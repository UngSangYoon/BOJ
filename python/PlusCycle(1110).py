N = int(input())

New = N
count = 0

while New != N or count == 0:
    FirstDigit = New // 10
    SecondDigit = New % 10
    New = (SecondDigit * 10) + ((FirstDigit + SecondDigit) % 10)
    count += 1

print(count)
