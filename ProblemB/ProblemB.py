def Fractal(order,level):
	if(level==1):
		p=3**order
		print("FD 1/%d"%p)
		print("LD 60")
		print("FD 1/%d"%p)
		print("LD 240")
		print("FD 1/%d"%p)
		print("LD 60")
		print("FD 1/%d"%p)
	else:
		Fractal(order,level-1)
		print("LD 60")
		Fractal(order,level-1)
		print("LD 240")
		Fractal(order,level-1)
		print("LD 60")
		Fractal(order,level-1)

def output(n):
	Fractal(n,n)

N=int(input())
output(N)