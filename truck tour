n=int(input())
petrol,distance=[],[]
for i in range(n):
    p,d=[int(x) for x in input().split()]
    petrol.append(p),distance.append(d)
start,xsum=0,0
for i in range(n):
    xsum+=petrol[i]-distance[i]     #Calculating the difference and adding to the sum
    if xsum<0:          #If sum becomes negative, that means we cannot complete the loop
        start=i+1       #So start from the next index
        xsum=0          #Reset the sum
print(start)
