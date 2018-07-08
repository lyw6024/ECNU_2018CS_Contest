#include <stdio.h>

int main(void)
{	
	char op,n1,n2;
	int res;
	n1=getchar();
	op=getchar();
	n2=getchar();
	switch(op)
	{
		case '+':
			res=(n1-'0')+(n2-'0');
			break;
		case '-':
			res=(n1-'0')-(n2-'0');
			break;
		case '*':
			res=(n1-'0')*(n2-'0');
			break;
		default:
			break;
	}
	printf("%d\n",res);
	return 0;
}
