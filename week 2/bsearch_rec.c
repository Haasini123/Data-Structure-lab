{
	int i,mid,pos = -1;
	if(first<=last)
	{
		mid = (first + last)/2;
		if(a[mid] == key)
			return mid;
		else if(a[mid]<key)
			binary_search(mid+1,last,a,key);
		else
			binary_search(first,mid-1,a,key);
	}
	else
		return -1;
}

			
int main()
{
	int i,pos,n,key,a[50];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	pos = binary_search(0,n-1,a,key);
	if(pos==-1){
		printf("elements not present");
	}
	else
	printf("elements present at %d location ",pos +1);
}
	
