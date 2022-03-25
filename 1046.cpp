// P1046	寻找C位数
// WSXNH 已提交，禁止复制 
#include<stdio.h>
int main()
{
	int N,i,temp;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	temp=(N-1)/2;
	printf("%d",a[temp]);
	return 0;
}
// @ WSXNH 
