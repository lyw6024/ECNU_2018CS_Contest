#include <stdio.h>

int main(void)
{
	int i,N;
	long long spl,currD;
	const int deepD=8;
	scanf("%d",&N);

	spl=N*(N+1)/2;
	currD=4*(N-1)-1;
	printf("%lld\n",spl);
	for(i=N-1;i>0;i-=2)
	{
		spl+=currD*i+1;
		printf("%lld\n",spl);
		currD-=deepD;
	}
	currD=currD+deepD-10;

	if(N%2==1)
	{
		for(i=1;i<N;i+=2)
		{
			spl+=currD*i;
			printf("%lld\n", spl);
			currD-=deepD;
		}
	}
	else
	{
		for(i=2;i<N;i+=2)
		{
			spl+=currD*i;
			printf("%lld\n", spl);
			currD-=deepD;
		}
	}

	return 0;
}