n = input( )
n = n.split(" ")

found = False
for i in range(int(n[0]),int(n[1]+1)):
    if i% int(n[2]) == 0:
        print(i, end = " ")
        found = True
        break
    
if found == False:
    print(-1)       