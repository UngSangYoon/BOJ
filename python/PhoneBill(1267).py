N = int(input())
Times = list(map(int, input().split()))

def Y(c) :
    global N
    fee = 0
    for i in range(N):
        fee += ((c[i] // 30) + 1) * 10
    return fee
    

def M(c):
    global N
    fee = 0  
    for i in range(N):
        fee += ((c[i] // 60) + 1) * 15
    return fee

Y_fee = Y(Times)
M_fee = M(Times)

if Y_fee < M_fee:
    print("Y",Y_fee)
    
elif M_fee < Y_fee:
    print("M", M_fee)
    
else:
    print("Y M", Y_fee)
