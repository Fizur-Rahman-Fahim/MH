n = input()
n=n.split(' ')

h= int(n[0])
a= int(n[1])
count = int(0)
while h > 0:
    h = h-a
    count = count+1
print (count)