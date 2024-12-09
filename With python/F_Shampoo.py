n = input()
n = n.split(' ')

v = int(n[0])
a = int(n[1])
b = int(n[2])
c = int(n[3])

while True:
    if v<a:
        print('F')
        break
    if v> a:
        v = v-a
    
    if v<b:
        print('M')
        break
    if v> b:
        v = v-b
    

    if v<c:
        print('T')
        break
    if v> c:
        v = v-c