n = input()
strlen= len(n)
i= int(-1)
lis = []
for j in range(0,strlen):
    if j%3 == 0:
        lis.append(',')
    lis.append(n[i-j])
    # print(n[i-j],end="")
print(lis)