#include <stdio.h>
#include <string.h>

#define MAXDIGIT 57
#define MAXN 200007
typedef struct numNode ElemType;

struct numNode
{
	int isPositive;
	int digit;
	char value[MAXDIGIT];
};
ElemType a[MAXN];

int myCompare(ElemType a,ElemType b);
void sort(ElemType *a,int N);

int main(void)
{
	int i,N;

	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",a[i].value);
		a[i].digit=strlen(a[i].value);
		if(a[i].value[0]=='-')
			a[i].isPositive=0;
		else
			a[i].isPositive=1;
	}

	sort(a,N);

	for(i=0;i<N;i++)
		printf("%s ",a[i].value);
	printf("\n");
	return 0;

}


int myCompare(ElemType a,ElemType b)
{
	if(a.isPositive && b.isPositive == 1){
		//both of a and b are positive 
		if(a.digit!=b.digit)
			return a.digit<b.digit;
		else
			return strcmp(a.value,b.value)<0;
	}
	else if(a.isPositive==0 && b.isPositive==0){
		if(a.digit!=b.digit)
			return a.digit>b.digit;
		else
			return strcmp(a.value+1,b.value+1)>0;
	}
	else
		return a.isPositive==0;
}


void QuickSort(ElemType *a,int lwbd,int upbd)
{

	int i=lwbd,j=upbd;
	if(i<j){
			ElemType tmp=a[i];
		while(i<j)
		{
			while(i<j && myCompare(tmp,a[j]))
				j--;
			if(i<j)
				a[i++]=a[j];
			while(i<j && myCompare(a[i],tmp))
				i++;
			if(i<j)
				a[j--]=a[i];
		}
		a[i]=tmp;
		QuickSort(a,lwbd,i-1);
		QuickSort(a,i+1,upbd);
	}

}


void sort(ElemType *a,int N)
{
	QuickSort(a,0,N-1);
}
