// P1021	日历问题
// WSXNH 已提交，禁止复制 
#include<stdio.h>
#define N 11
int main()
{
	char a[N];
	int i,j;
	for(i=0;i<N;i++)
	 scanf("%c",&a[i]);
	a[5]='6';
	for(j=5;j<N;j++)
	 printf("%c",a[j]);
	return 0;
}
// @ WSXNH
