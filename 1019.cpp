// P1019	修改字符串
// WSXNH 已提交，禁止复制 
#include<stdio.h>
#define N 500
int main()
{
	char s1[N];
	int i=0,temp;
	scanf("%s",&s1);
	for(i=0;i<500;i++)
	{
		if(s1[i]=='\0')
		{
		temp=i;
		break;	
		}
	}
	for(i=0;i<temp;i++)
	if(s1[i]>='A'&&s1[i]<='Z')
		s1[i]=s1[i]+32;
	for(i=0;i<temp;i++)
		printf("%c",s1[i]);
	return 0;
} 
// @ WSXNH
