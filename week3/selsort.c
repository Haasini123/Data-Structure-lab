#include<stdio.h>
void selectionsort(int a[100],int n)
{
	int i,j,t,min;
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[min])
				min = j;
		}
		t = a[i];
		a[i] = a[min];
		a[min] = t;
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
	selectionsort(a,n);
	printf("Elements after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}