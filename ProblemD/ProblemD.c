#include <stdio.h>
#define MAXN 200007

struct sNode
{
	int scale;
	int leader;
}a[MAXN];

int main(void)
{
	freopen("log","r",stdin);
	int i,N,curr_index;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&(a[i].leader));
		a[i].scale=1;
	}

	for(i=1;i<=N;i++)
	{

		curr_index=i;
		while(a[curr_index].leader>0)
		{
			curr_index=a[curr_index].leader;
			a[curr_index].scale++;
		}
	}

	for(i=1;i<=N;i++)
		printf("%d ",a[i].scale);

	return 0;
}
