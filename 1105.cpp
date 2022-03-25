#include<stdio.h>
int main ()
{
	int a,i,temp,k,r=0;
	scanf("%d",&a);
	{
		temp=a-2;
	
	for(i=3;i<temp;i++)
	{
	if(temp%i==0)
	{
		break;
		r=1;
	}
	if(i=temp&&r==0)
		{
		printf("2+%d",temp);
		return 0;
		}
	}
	
	
	if(a==4)
	{
	printf("2+2");
	return 0;
	}
	
	for(i=3;i<a-2;i++)
	{
		for(k=3;k<i;k++)
		{
			if(i%k==0)
			break;
		}
		if(k=i)
		temp=a-i;
		
		for(k=3;k<temp;k++)
		{
			if(i%k==0)
			break;
		}
		
		if(k=temp)
		{
		printf("%d+%d",i,temp);	
		return 0;
		}
	}
	}
	
	
}
