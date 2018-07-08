#include <stdio.h>
#define DEBUG 1
#define MAXN 100 
// if MAXN reach the upperbound 2e+5, it must beyond the memory limit

int N;
// the order of matrix


int valid(int x,int y)
{
	if(x>=0 && x<N & y>=0 && y<N)
		return 1;
	else 
		return 0;
}

typedef long long resType;
resType accumulate(resType *a)
{
	int i;
	resType s=0;
	for (i=0;i<N;i++)
		s+=a[i];
	return s;
}

int main(void)
{

	int i,k,x,y;

	resType a[MAXN][MAXN];

	for(x=0;x<MAXN;x++)
		for(y=0;y<MAXN;y++)
			a[x][y]=0;

	scanf("%d",&N);

	int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
	a[0][0]=1;

	k=0;x=0;y=0;
	for(i=2;i<=N*N;i++)
	{
		while(!(valid(x+dir[k][0],y+dir[k][1]) && a[x+dir[k][0]][y+dir[k][1]]==0))
			k=(k+1)%4;
		x=x+dir[k][0];
		y=y+dir[k][1];
		a[x][y]=i;
	}

#if DEBUG
// output the matrix
	for(x=0;x<N;x++){
		for(y=0;y<N;y++)
			printf("%4d",a[x][y]);
		printf("\n");
	}
#endif

	for(i=0;i<N;i++)
		printf("%d\n",accumulate(a[i]));

	return 0;


}
