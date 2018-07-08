#include <cstdio>
#include <algorithm>
using std::sort;


struct sNode
{
	int index;
	int leader;
	int level;
	bool operator<(sNode const &t){return level<t.level;}
}*mem;


int main(void)
{
	int *scale;
	int i,N;
	scanf("%d",&N);

	scale=new int [N+1];
	mem=new sNode [N+1];

	for(i=1;i<=N;i++){
		scale[i]=0;
		mem[i].index=i;
		scanf("%d",&mem[i].leader);
		mem[i].level=mem[mem[i].leader].level+1;
	}

	sort(mem+1,mem+N+1);

	for(i=N;i>0;i--){
		scale[mem[i].index]+=1;
		scale[mem[i].leader]+=scale[mem[i].index];
	}

	for(i=1;i<=N;i++){
		if(i>1)
			printf(" ");
		printf("%d",scale[i]);
	}
	return 0;

}