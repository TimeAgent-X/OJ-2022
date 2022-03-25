// P1072	数据合并
// WSXNH 已提交，禁止复制 
#include<stdio.h>
int main()
{
	int m,n,i,j,change;
	scanf("%d%d",&m,&n);
	int a[m],b[n],temp[m+n];
	for(i=0;i<m;i++)
	{
	scanf("%d",&a[i]);
	temp[i]=a[i];
	}
	for(j=0;j<n;j++,i++)
	{
	scanf("%d",&b[j]);
	temp[i]=b[j];
	}
	for(i=0;i<m+n;i++)
		for(j=0;j<m+n-1;j++)
			if(temp[j]>temp[j+1])
			{
				change=temp[j];
				temp[j]=temp[j+1];
				temp[j+1]=change;
			}
	for(i=0;i<m+n;i++)
	printf("%d ",temp[i]);
	return 0;
}
// @ WSXNH 
