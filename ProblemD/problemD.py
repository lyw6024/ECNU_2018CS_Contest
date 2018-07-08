def mySort(array):
	less = []
	equal = []
	greater = []
	if len(array)>1:
		pivot = array[0][2]
		for x in array:
			if x[2] < pivot:
				less.append(x)
			if x[2] == pivot:
				equal.append(x)
			if x[2] > pivot:
				greater.append(x)
		return mySort(less)+equal+mySort(greater)
	else:
		return array

N=int(input())
memberList=list()
memberList.append((0,0,0))
inputList=list(map(int,input().split(' ')))

for i in range(1,N+1): 
	leader=inputList[i-1]
	level=memberList[leader][2]+1
	memberList.append((i,leader,level))

mySort(memberList)

scale=[0]
for i in range(N):
	scale.append(0)

for i in range(N,0,-1):
	scale[memberList[i][0]]+=1
	scale[memberList[i][1]]+=scale[memberList[i][0]]
for i in range(1,N+1):
	if(i>1):
		print(' ',end='')
	print(scale[i],end='')
