import turtle

def draw(it,n,level):
	length=400/3**n
	if(level==1):
		it.forward(length)
		it.left(60)
		it.forward(length)
		it.left(240)
		it.forward(length)
		it.left(60)
		it.forward(length)
	else:
		draw(it,n,level-1)
		it.left(60)
		draw(it,n,level-1)
		it.left(240)
		draw(it,n,level-1)
		it.left(60)
		draw(it,n,level-1)

def output(it,n):
	draw(it,n,n)

bob=turtle.Turtle()

bob.setx(-200)
bob.clear()
bob.hideturtle()

N=int(input())
output(bob,N)
input()
