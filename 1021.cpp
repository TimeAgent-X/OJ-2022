// P1021	日历问题
// WSXNH 已提交，禁止复制 
#include<stdio.h>
int main()
{
	int a,b;
	while(~scanf("%d",&a)){
	b=a%7;
		if(b==0)
		printf("7\n");
		if(b==1)
		printf("1\n");
		if(b==2)
		printf("2\n");
		if(b==3)
		printf("3\n");
		if(b==4)
		printf("4\n");
		if(b==5)
		printf("5\n");
		if(b==6)
		printf("6\n");
	}
	return 0;
} 
// @ WSXNH
