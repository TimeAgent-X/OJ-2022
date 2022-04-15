#include<stdio.h>
#include<stdlib.h>
long long int a[1001][1001],b[1000001],i,j,n,temp=0;
int main()
{
	scanf("%lld",&n);
	for(i=0;i<1001;i++)
		for(j=0;j<1001;j++)
		a[i][j]=0;
//	for(i=0;i<1001;i++)
//		for(j=0;j<1001;j++)
//		printf("%d*",a[i][j]);
	for(i=0;i<1001;i++)
		a[i][0]=1;
	for(i=1;i<1001;i++)
		for(j=1;j<1001;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		//	printf("%lld*",a[i][j]);
			if(a[i][j]==1)
			break;
		}
	for(i=0;i<1001;i++)
		for(j=0;j<1001;j++)
		if(a[i][j]!=0)
			b[temp++]=a[i][j];
		//printf("%lld*",b[temp]);
		for(i=0;i<1000001;i++)
			if(b[i]==n)
			{
				printf("%lld\n",i+1);
				return 0;
			}
}
