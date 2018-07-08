N=int(input())
spl=int(N*(N+1)/2)	#sum per line
currD=4*(N-1)-1		#current distance
deepD=8				#2_order distance
print(spl)			#sum of the 1st line
for i in range(N-1,0,-2):
	spl+=currD*i+1		
	print(spl)
	currD-=deepD
currD=currD+deepD-10

if(N%2==1):
	for i in range(1,N,2):
		spl+=currD*i
		print(spl)
		currD-=deepD
else:
	for i in range(2,N,2):
		spl+=currD*i
		print(spl)
		currD-=deepD