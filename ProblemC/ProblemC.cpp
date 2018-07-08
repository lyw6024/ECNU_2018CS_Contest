#include <cstdio>
#include <cstring>
#include <algorithm>
using std::sort;
const int MAXDIGIT=57;

struct numNode{
	bool isPositive;
	int digit;
	char value[MAXDIGIT];

	bool operator<(const numNode &b) const
	{
		if(isPositive==true &&b.isPositive==true)
		{
			if(digit!=b.digit)
				return digit<b.digit;
			else
				return strcmp(value,b.value)<0;
		}
		else if( isPositive== false && b.isPositive==false)
		{
			if(digit!=b.digit)
				return digit>b.digit;
			else
				return strcmp(value,b.value)>0;
		}
		else
			return b.isPositive;
	}
};


int main(void)
{
	int i,N;
	scanf("%d",&N);
	numNode *s=new numNode [N];
	for(i=0;i<N;i++)
	{
		scanf("%s",s[i].value);
		s[i].digit=strlen(s[i].value);
		if(s[i].value[0]=='-')
			s[i].isPositive=false;
		else
			s[i].isPositive=true;
	}

	sort(s,s+N);

	for (i=0;i<N;i++)
		printf("%s ",s[i].value);
	printf("\n");
	delete [] s;
	return 0;

}

