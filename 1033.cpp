// P1033	简单排序
// WSXNH 已提交，禁止复制 
#include<stdio.h>
int main()
{
	int n,i,j,temp;
	while(~scanf("%d",&n))
	{
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n;j++)
		for(i=0;i<n-1;i++)
			if(a[i]>a[i+1])
			{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			}
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[i]); 
	}
}
// @ WSXNH
