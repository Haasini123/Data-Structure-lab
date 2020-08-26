#include<stdio.h>
int linear_search(int n,int a[10],int key)
{
	static int i;
	if(a[i]==key)
	{
		return i;
	}
	else if(i<n)
	{
		i++;
		linear_search(n,a,key);
	}	
	else
	return -1;
}

			
int main()
{
	int i,pos,n,target,a[50];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&target);
	pos = linear_search(n,a,target);
	if(pos==-1)
	{
		printf("elements not present");
	}
	else
	{
	printf("elements present at %d location ",pos +1);
	}
}
