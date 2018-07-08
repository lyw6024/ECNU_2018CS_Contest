#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(void)
{
	int x,y,res;
	char op;
	cin>>x>>op>>y;
	switch(op)
	{
		case '+':
			res=x+y;
			break;
		case '-':
			res=x-y;
			break;
		case '*':
			res=x*y;
			break;
		case '/':
			res=x/y;
			break;
		default:
			break;
	}
	cout<<res<<endl;
	return 0;
}