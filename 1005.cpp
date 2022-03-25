// P1005	最大公约数
// WSXNH 已提交，禁止复制 
#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	while(n--)
		{
			scanf("%d%d",&a,&b);
			int i=0,min=a;
			if(a>b)
				min=b;
			for(i=min;i>=1;i--)
			{
			if(a%i==0&&b%i==0)
				{
				printf("%d\n",i); 
				break;
				}
			}
		}
		return 0;
}
// @ WSXNH 
