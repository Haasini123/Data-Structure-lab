#include<stdio.h>
void insertsort(int a[100],int n)
{
	int i,j,index;
	for(i=1;i<n;i++)
	{
		index = a[i];
		j = i;
		while (j>0 && (a[j-1] > index))
		{
			a[j] = a[j-1];
			j = j-1;
		}
		a[j] = index;
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertsort(a,n);
	printf("Elements after sorting:");
	for(i=0;i<n;i++)
	{
		printf("\n%d\n",a[i]);
	}
}