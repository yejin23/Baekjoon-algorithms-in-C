N = int(input())
T = int(str(N % 10)+str(((N//10 + N % 10) % 10)))
#  print(T)
cnt=1
while N != T:
    T = int(str(T % 10)+str(((T//10 + T % 10) % 10)))
    cnt += 1
print(cnt)