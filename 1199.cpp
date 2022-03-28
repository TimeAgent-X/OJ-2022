#include<stdio.h> 
int fun(int a,int b)
{
	int k,min;
	min=a<b?a:b;
		for(k=2;k<=min;k++)
		{
			if(a%k==0&&b%k==0)
				return 0;
		}
	return 1;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int i=0,j=0,temp=0;
		int a[n];
	if(n!=0)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(a[i]<a[j]&&fun(a[i],a[j]))
					temp++;
			}
		printf("%d\n",temp); 
	}
	}
	return 0; 
}
