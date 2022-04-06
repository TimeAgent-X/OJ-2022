#include<stdio.h>
int main()
{
	int n;
	while(~scanf("%d",&n)) 
	{
	int a[n][n];
	int i,j,temp=1;
	if(n%2==0)
		for(i=0;i<n;)
		{
			for(j=0;j<n;j++)
				a[i][j]=temp++;
			for(j=n-1;j>=0;j--)
				a[i+1][j]=temp++;
			i=i+2;
		}
	else
		{
			for(i=0;i<n-1;)
			{
				for(j=0;j<n;j++)
					a[i][j]=temp++;
				for(j=n-1;j>=0;j--)
					a[i+1][j]=temp++;
				i=i+2;
			}
			for(i=n-1,j=0;j<n;j++)
				a[i][j]=temp++;
		}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\n");
}
	return 0;	
}
