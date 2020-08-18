#include<stdio.h>
struct student 
{
	char rollno[15];
	char name[20];
	int m[4];
	float avg;
	char grade;
};
           int main()
{
	struct student s[5];
	char grade;
	int n,i,j,sum = 0;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i].name);
		scanf("%s",s[i].rollno);
		for(j=0;j<4;j++)
		{
			scanf("%d",&s[i].m[j]);
			sum = sum + s[i].m[j];
		}
		avg = sum / 4.0;
		if(avg>=70.0)
		{
			grade = 'A';
		}
		else if(45.0>=avg<70.0)
		{
			grade = 'B';
		}
		else
		{
			grade = 'C';
		}
		printf("name=%s\n",s[i].name);
		printf("rollno=%s\n",s[i].rollno);
		printf("grade=%c\n",grade);
	}	
}
